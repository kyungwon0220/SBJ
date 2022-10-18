#pragma warning(disable:4996)
#include "returnBookClass.h"

returnBookClass::returnBookClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

returnBookClass::~returnBookClass()
{}
int returnBookClass::BookReturn(string RequesterVelue, string BookNVelue) {
    int ITBN = 0;
    int searchValue;
    string bookBuffer;
    vector<string>bufferout;
    vector<string>accountbufferout;
    string accountBuffer;

    ifstream  BookFile("book_info.csv");
    while (BookFile.peek() != EOF) {
        getline(BookFile, bookBuffer);
        istringstream ss(bookBuffer);

        while (getline(ss, bookBuffer, ',')) {
            bufferout.push_back(bookBuffer);
        }
    }
    BookFile.close();
    // 1. BookNVelue의 값과 동일한 행이 나올때까지 ITBN값을 더한다.
    // 2. 그리고 그 ITBN값을 SearchValue에 넣는다.
    while (ITBN < bufferout.size()) {
        if (BookNVelue.compare(bufferout[ITBN * 6]) == 0) {
            searchValue = ITBN;
            break;
        }
        ITBN++;
    }
    int realsearchValue = searchValue * 6 + 4;
    int BooknameVelue = searchValue * 6;


    vector<string>::iterator it;
    it = bufferout.begin();
    it = it + realsearchValue;

    string BNV = bufferout[BooknameVelue];

    ifstream accountfile("Account_info.csv");
    while (accountfile.peek() != EOF) {
        getline(accountfile, accountBuffer);
        istringstream ss(accountBuffer);

        while (getline(ss, accountBuffer, ',')) {
            accountbufferout.push_back(accountBuffer);
        }
    }
    accountfile.close();

    for (int i = 0; i < accountbufferout.size(); i++) {
        if (accountbufferout[i] == RequesterVelue) {
            int accountint = stoi(accountbufferout[i + 6]);
            //대여가능회수 복구
            accountint++;
            //다시 스트링으로 복구
            accountbufferout[i + 6] = to_string(accountint);

            //빌린책 불러와서 배열로 분해하고. 비교한뒤, 재조합해서 다시 넣어주기

            string accRentBooks = accountbufferout[i + 5];
            istringstream accountstr(accRentBooks);
            string accstreambuffer;
            vector<string>accountarr;
            string accexchangeoutput;

            accountarr.clear();


            while (getline(accountstr, accstreambuffer, '^')) {
                accountarr.push_back(accstreambuffer);
            }
            int count = 0;
            while (count < accountarr.size()) {
                if (accountarr[count].compare(BNV) != 0) {
                    //비교시 값이 다르면 추가
                    accexchangeoutput = accexchangeoutput + accountarr[count];
                    //마지막이라면 구분자를 넣지않는다
                    if (count + 1 != accountarr.size()) {
                        accexchangeoutput = accexchangeoutput + "^";
                    }
                }
                else {
                    //값이 같았다면 추가하지않음


                }
                count++;
            }

            accountbufferout[i + 5] = accexchangeoutput;
            if (accRentBooks.compare(accexchangeoutput) == 0) {
                return 1;
            }



        }
    }
    int r;
    r = unlink("Account_info.csv");
    ofstream MyAccountFile;
    MyAccountFile.open("Account_info.csv", ios::out | ios::ate | ios::app);

    if (!MyAccountFile.is_open()) {
        return 3;
    }
    else {
        for (int j = 0; j < accountbufferout.size() / 9; j++) {
            for (int k = 0; k < 9; k++) {
                MyAccountFile << accountbufferout[j * 9 + k] << ",";
            }
            MyAccountFile << endl;
        }
        MyAccountFile.close();
    }
    int Bufferint = stoi(bufferout[realsearchValue]);
    Bufferint++;
    bufferout[realsearchValue] = to_string(Bufferint);


    r = unlink("book_info.csv");
    ofstream MyFile;
    MyFile.open("book_info.csv", ios::out | ios::ate | ios::app);

    if (!MyFile.is_open()) {
        return 3;
    }
    else {
        for (int j = 0; j < bufferout.size() / 6; j++) {
            for (int k = 0; k < 6; k++) {
                MyFile << bufferout[j * 6 + k] << ",";
            }
            MyFile << endl;
        }
        MyFile.close();
        return 0;
    }

}
void returnBookClass::return_book() {
    QString qbook_name = ui.lineEdit->text();
    QByteArray qbbook_name = qbook_name.toLocal8Bit();
    const char* book_name = qbbook_name.data();

    extern vector<string> loginuserinfo;
    string requester = loginuserinfo[0];
    QString qrequester = QString::fromUtf8(requester);
    QByteArray qbrequester = qrequester.toLocal8Bit();
    const char* realrequeester = qbrequester.data();

    QMessageBox::StandardButton reply;
    QMessageBox messageBox;
    reply = messageBox.question(this, "return", "return?");

    if (reply == QMessageBox::Yes) {
        int d = BookReturn(realrequeester, book_name);
        if (d == 0) {
            QMessageBox::information(this, "return", "success!");
            close();
        }
        else if (d == 1) {
            QMessageBox::warning(this, "return", "no return book");
        }
        else if (d == 3) {
            QMessageBox::warning(this, "return", "file error");
        }
    }
    else {
        close();
    }
}

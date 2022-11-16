#pragma warning(disable:4996)
#include "bookinfoClass.h"
#include "borrowClass.h"
#include "loginClass.h"

using namespace std;

extern int rowValue;

bookinfoClass::bookinfoClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	init();
	
	
}

bookinfoClass::~bookinfoClass()
{}

void bookinfoClass::init() {

	vector<string>bufferout;
	string bookBuffer;
	//borrowClass bc;
	//int row = bc.returncurrenRow();

	int searchrow = rowValue * 6;

	ifstream myfile("book_info.csv");
	while (myfile.peek() != EOF) {

		getline(myfile, bookBuffer);
		istringstream ss(bookBuffer);

		while (getline(ss, bookBuffer, ',')) {
			bufferout.push_back(bookBuffer);
		}

	}
	
	QString bname = QString::fromLocal8Bit(bufferout[searchrow]);
	QString bauthor = QString::fromLocal8Bit(bufferout[searchrow + 1]);
	QString binfo = QString::fromLocal8Bit(bufferout[searchrow +3]);
	QString bimage = QString::fromLocal8Bit(bufferout[searchrow + 5]);
    QString bnum = QString::fromLocal8Bit(bufferout[searchrow+4]);
    ui.book_num->setText(QString::fromLocal8Bit("³²Àº Ã¥:") + bnum);
	ui.book_name->setText(bname);
	ui.book_info->setText(binfo);
	ui.book_author->setText(bauthor);
	QPixmap pix(bimage);
	ui.book_photo->setPixmap(pix);

}
void bookinfoClass::info_close() {
	close();
}
void bookinfoClass::borrow_book() {

    extern vector<string> loginuserinfo;


    string requester = loginuserinfo[0];
    QString qrequester = QString::fromUtf8(requester);
    QByteArray qbrequester = qrequester.toLocal8Bit();
    const char* realrequeester = qbrequester.data();

    QMessageBox::StandardButton reply;
    QMessageBox messageBox;
    reply = messageBox.question(this, "borrow", "borrow?");

    if (reply == QMessageBox::Yes) {
        int d = BookRental(rowValue, realrequeester);
        if (d == 0) {
            QMessageBox::information(this, "borrow", "success!");
        }
        else if (d == 1) {
            QMessageBox::warning(this, "borrow", "no book");
        }
        else if (d == 2) {
            QMessageBox::warning(this, "borrow", "no book exist");
        }
        else if (d == 3) {
            QMessageBox::warning(this, "borrow", "no file open");
        }
        else if (d == 4) {
            QMessageBox::warning(this, "borrow", "You have already borrowed 3 books.");
        }
    }
    else {
        close();
    }
}

int bookinfoClass::BookRental(int searchValue, string RequesterVelue) {
    string bookBuffer;
    vector<string>bufferout;
    vector<string>accountbufferout;
    string accountBuffer;
    int realsearchValue = searchValue * 6 + 4;
    ifstream  BookFile("book_info.csv");
    while (BookFile.peek() != EOF) {
        getline(BookFile, bookBuffer);
        istringstream ss(bookBuffer);

        while (getline(ss, bookBuffer, ',')) {
            bufferout.push_back(bookBuffer);
        }
    }
    BookFile.close();
    if (bufferout[realsearchValue] == "0") {
        return 1;
    }
    else {
        ifstream accountfile("Account_info.csv");
        while (accountfile.peek() != EOF) {
            getline(accountfile, accountBuffer);
            istringstream ss(accountBuffer);

            while (getline(ss, accountBuffer, ',')) {
                accountbufferout.push_back(accountBuffer);
            }
        }
        accountfile.close();
        for (int k = 0; k < accountbufferout.size(); k++) {
            if (accountbufferout[k] == RequesterVelue) {
                if (accountbufferout[k + 6] == "0") {
                    return 4;
                }
                else {
                    break;
                }
            }
        }
        for (int i = 0; i < accountbufferout.size(); i++) {
            if (accountbufferout[i] == RequesterVelue) {
                int accountint = stoi(accountbufferout[i + 6]);
                if (accountint == 3) {
                    accountbufferout[i + 5] = bufferout[searchValue * 6];
                    accountint--;
                    accountbufferout[i + 6] = to_string(accountint);
                }
                else if (accountint < 3) {
                    accountbufferout[i + 5] = accountbufferout[i + 5] + "^" + bufferout[searchValue * 6];
                    accountint--;
                    accountbufferout[i + 6] = to_string(accountint);
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
        Bufferint--;
        bufferout[realsearchValue] = to_string(Bufferint);
    }
    int r;
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
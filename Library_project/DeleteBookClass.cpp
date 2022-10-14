#pragma warning(disable:4996)
#include "DeleteBookClass.h"
#include "CSVCOLUMN2.h"
//#include <windows.h>


DeleteBookClass::DeleteBookClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	init();
}

DeleteBookClass::~DeleteBookClass()
{}
void DeleteBookClass::init() {

	string filename("C:\\Users\\KOSTA\\Desktop\\book_info\\book_info\\book_info.csv");
	string file_contents;
	char delimiter = ',';

	ifstream myfile(filename);
	string record;
	string book_info[100][6];
	int i = 0;
	int j = 0;
	while (myfile.peek() != EOF) {
		getline(myfile, file_contents);
		istringstream ss(file_contents);
		while (getline(ss, file_contents, ',')) {
			book_info[i][j] = file_contents;
			j++;
			if (j > 5) {
				j = 0;
				i++;
			}
		}
	}
	for (int i = 0; i < CsvCulumn2(filename); i++) {
		ui.tableWidget->insertRow(ui.tableWidget->rowCount());
		ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 0, new QTableWidgetItem(QString::fromLocal8Bit(book_info[i][0])));
		ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 1, new QTableWidgetItem(QString::fromLocal8Bit(book_info[i][1])));
		ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 2, new QTableWidgetItem(QString::fromLocal8Bit(book_info[i][2])));
	}
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void DeleteBookClass::delete_book() {
	int row = ui.tableWidget->currentRow();
	string num = to_string(row+1);
	string question = "delete? " + num;
	QMessageBox::StandardButton reply;
	QMessageBox messageBox;
	reply = messageBox.question(this, "delete", QString::fromLocal8Bit(question));

	if (reply == QMessageBox::Yes) {
		vector<string>bufferout;
		string bookBuffer;
		int delrow = row * 6;

		ifstream myfile("C:\\Users\\KOSTA\\Desktop\\book_info\\book_info\\book_info.csv");
		myfile.getloc();
		while (myfile.peek() != EOF) {

			getline(myfile, bookBuffer);
			istringstream ss(bookBuffer);

			while (getline(ss, bookBuffer, ',')) {
				bufferout.push_back(bookBuffer);
			}
		}
		myfile.close();
		vector<string>::iterator it;
		it = bufferout.begin();
		it = it + delrow;
		for (int i = 0; i < 6; i++) {
			it = bufferout.erase(it);
		}
		int r;
		r = unlink("C:\\Users\\KOSTA\\Desktop\\book_info\\book_info\\book_info.csv");
		ofstream MyFile;
		MyFile.open("C:\\Users\\KOSTA\\Desktop\\book_info\\book_info\\book_info.csv", ios::out | ios::ate | ios::app);
		//MyFile.seekp(1, ios::beg);
		if (!MyFile.is_open()) {
			cout << "¾ÈµÅ~" << endl;
		}
		else {
			for (int j = 0; j < bufferout.size() / 6; j++) {
				for (int k = 0; k < 6; k++) {
					MyFile << bufferout[j * 6 + k] << ",";
				}
				MyFile << endl;
			}
			MyFile.close();
		}
	}
	else {
		close();
	}
}

#include "AddBookClass.h"
#include<locale.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>
#include <sstream>
using namespace std;

AddBookClass::AddBookClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

AddBookClass::~AddBookClass()
{}
void AddBookClass::add_book() {

	QString qbook_name = ui.book_name->text();
	QString qbook_author = ui.book_author->text();
	QString qbook_publishing = ui.book_publishing->text();
	QString qbook_contents = ui.book_contents->text();
	QString qbook_number = ui.book_number->text();
	QString qbook_image = ui.book_image->text();

	QByteArray qbbook_name = qbook_name.toLocal8Bit();
	QByteArray qbbook_author = qbook_author.toLocal8Bit();
	QByteArray qbbook_publishing = qbook_publishing.toLocal8Bit();
	QByteArray qbbook_contents = qbook_contents.toLocal8Bit();
	QByteArray qbbook_number = qbook_number.toLocal8Bit();
	QByteArray qbbook_image = qbook_image.toLocal8Bit();

	const char* book_name = qbbook_name.data();
	const char* book_author = qbbook_author.data();
	const char* book_publishing = qbbook_publishing.data();
	const char* book_contents = qbbook_contents.data();
	const char* book_number = qbbook_number.data();
	const char* book_image = qbbook_image.data();



	ofstream MyFile;
	MyFile.open("book_info.csv", ios::out | ios::ate | ios::app);


	if (!MyFile.is_open()) {
		QMessageBox::warning(this, "addBook", "failed to open");
	}
	else {
		MyFile << book_name << "," << book_author << "," << book_publishing <<"," << book_contents<<","<< book_number<<","<< book_image<<endl;
		QMessageBox::information(this, "request", QString::fromLocal8Bit("요청 성공"));
		MyFile.close();
		close();
	}
}

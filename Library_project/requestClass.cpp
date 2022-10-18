#include "requestClass.h"
#include<locale.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>
#include <sstream>
using namespace std;

requestClass::requestClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

requestClass::~requestClass()
{}
void requestClass::storeRequest() {
	QString book_name = ui.name_lineEdit->text();
	QString book_author = ui.author_lineEdit->text();
	
	QByteArray qbname = book_name.toLocal8Bit();
	QByteArray qbauthor = book_author.toLocal8Bit();

	const char* name_h = qbname.data();
	const char* author_h = qbauthor.data();

	ofstream MyFile;
	MyFile.open("book_request.csv", ios::out | ios::ate | ios::app);


	if (!MyFile.is_open()) {
		QMessageBox::warning(this, "request", "failed to open");
	}
	else {
		MyFile << name_h << "," << author_h << endl;
		QMessageBox::information(this, "request", QString::fromLocal8Bit("요청 성공"));
		close();
		MyFile.close();
	}
}
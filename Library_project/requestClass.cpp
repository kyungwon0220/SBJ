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
	
	string strname = book_name.toStdString();
	string strauthor = book_author.toStdString();
	setlocale(LC_ALL, "Korean");
	ofstream MyFile;
	MyFile.open("C:\\Users\\KOSTA\\Desktop\\book_info\\book_request\\book_request.csv", ios::out | ios::ate | ios::app);


	if (!MyFile.is_open()) {
		QMessageBox::warning(this, "request", "failed to open");
	}
	else {
		MyFile << strname << "," << strauthor << endl;
		QMessageBox::information(this, "request", QString::fromLocal8Bit("요청 성공"));
		MyFile.close();
	}
}
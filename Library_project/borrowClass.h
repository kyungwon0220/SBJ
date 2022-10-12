#pragma once

#include <QMainWindow>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <sstream>
#include "ui_borrowClass.h"
#include "bookinfoClass.h"

using namespace std;


class borrowClass : public QMainWindow
{
	Q_OBJECT

public:
	borrowClass(QWidget *parent = nullptr);
	~borrowClass();
	void init();
	string readFileIntoString(const string& path);
	int returncurrenRow();

private:
	Ui::borrowClassClass ui;
	bookinfoClass *booki;
public slots:
	void show_book_info();
	void search_book();

};

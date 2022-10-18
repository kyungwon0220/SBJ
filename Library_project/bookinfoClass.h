#pragma once

#include <QMainWindow>
#include <QMessagebox>
#include <QPixmap>
#include "ui_bookinfoClass.h"
#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <sstream>
using namespace std;


class borrowClass;

class bookinfoClass : public QMainWindow
{
	Q_OBJECT

public:
	bookinfoClass(QWidget *parent = nullptr);
	~bookinfoClass();
	int BookRental(int searchValue, string RequesterValue);
	void init();

private:
	Ui::bookinfoClassClass ui;
	

public slots:
	void info_close();
	void borrow_book();
};

#pragma once

#include <QMainWindow>
#include <QMessageBox>
#include <iostream>
#include <fstream> 
#include <vector>
#include <sstream>
#include <string>
#include "ui_returnBookClass.h"

using namespace std;

class returnBookClass : public QMainWindow
{
	Q_OBJECT

public:
	returnBookClass(QWidget *parent = nullptr);
	~returnBookClass();
	int BookReturn(string RequesterVelue, string BookNVelue);
	void init();

private:
	Ui::returnBookClassClass ui;
public slots:
	void return_book();
	void return_bookk();
};

#pragma once

#include <QMainWindow>
#include "ui_selectClass.h"
#include "borrowClass.h"
#include "requestClass.h"
#include "returnBookClass.h"
//#include "Library_project.h"

class selectClass : public QMainWindow
{
	Q_OBJECT

public:
	selectClass(QWidget *parent = nullptr);
	~selectClass();

private:
	Ui::selectClassClass ui;
	borrowClass *borrow;
	requestClass* request;
	returnBookClass* re;

public slots:
	void change_borrowClass();
	void change_requestClass();
	void change_returnClass();
	//void go_home();
};

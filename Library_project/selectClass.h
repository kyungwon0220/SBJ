#pragma once

#include <QMainWindow>
#include "ui_selectClass.h"
#include "borrowClass.h"
#include "requestClass.h"

class selectClass : public QMainWindow
{
	Q_OBJECT

public:
	selectClass(QWidget *parent = nullptr);
	~selectClass();

private:
	Ui::selectClassClass ui;
	borrowClass *borrow = 0;
	requestClass* request = 0;

public slots:
	void change_borrowClass();
	void change_requestClass();
};

#pragma once

#include <QMainWindow>
#include "ui_administratorClass.h"
#include "DeleteBookClass.h"
class administratorClass : public QMainWindow
{
	Q_OBJECT

public:
	administratorClass(QWidget *parent = nullptr);
	~administratorClass();

private:
	Ui::administratorClassClass ui;
	DeleteBookClass* delbook;
public slots:
	void change_addbook();
	void change_deletebook();
};

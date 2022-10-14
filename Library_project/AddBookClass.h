#pragma once

#include <QMainWindow>
#include <QMessageBox>
#include "ui_AddBookClass.h"

class AddBookClass : public QMainWindow
{
	Q_OBJECT

public:
	AddBookClass(QWidget *parent = nullptr);
	~AddBookClass();


private:
	Ui::AddBookClassClass ui;

public slots:
	void add_book();
};

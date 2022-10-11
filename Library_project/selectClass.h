#pragma once

#include <QMainWindow>
#include "ui_selectClass.h"
#include "borrowClass.h"

class selectClass : public QMainWindow
{
	Q_OBJECT

public:
	selectClass(QWidget *parent = nullptr);
	~selectClass();

private:
	Ui::selectClassClass ui;
	borrowClass *borrow;

public slots:
	void change_borrowClass();
};

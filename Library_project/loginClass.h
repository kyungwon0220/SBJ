#pragma once

#include <QMainWindow>
#include <QMessageBox>
#include "ui_loginClass.h"
#include "selectClass.h"

class loginClass : public QMainWindow
{
	Q_OBJECT

public:
	loginClass(QWidget *parent = nullptr);
	~loginClass();

private:
	Ui::loginClassClass ui;
	selectClass* select;
public slots:
	void change_select_ui();
};

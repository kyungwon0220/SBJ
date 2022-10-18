#pragma once

#include <QMainWindow>
#include <QMessageBox>
#include "ui_loginClass.h"
#include "selectClass.h"
#include "signupClass.h"

class loginClass : public QMainWindow
{
	Q_OBJECT

public:
	loginClass(QWidget *parent = nullptr);
	~loginClass();
	string return_loginid();

private:
	Ui::loginClassClass ui;
	selectClass* select = 0;
	signupClass* signup = 0;
public slots:
	void change_select_ui();
	void change_signupClass();
};

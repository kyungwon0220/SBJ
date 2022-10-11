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

private:
	Ui::loginClassClass ui;
	selectClass* select;
	signupClass* signup;
public slots:
	void change_select_ui();
	void change_signupClass();
};

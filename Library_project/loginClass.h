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
	selectClass* select = 0; // 0은 초기화시키지 않았다고 경고가 나와서 넣었습니다.
	signupClass* signup = 0;
public slots:
	void change_select_ui();
	void change_signupClass();
};

#pragma once

#include <QMainWindow>
#include <QMessageBox>
#include "ui_signupClass.h"

class signupClass : public QMainWindow
{
	Q_OBJECT

public:
	signupClass(QWidget *parent = nullptr);
	~signupClass();

	

private:
	Ui::signupClassClass ui;
public slots:
	void signup_done();
	void check_duplicate_id();
	void text_changed();
	void pw_showhide();
};

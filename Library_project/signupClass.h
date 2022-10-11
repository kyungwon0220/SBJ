#pragma once

#include <QMainWindow>
#include "ui_signupClass.h"

class signupClass : public QMainWindow
{
	Q_OBJECT

public:
	signupClass(QWidget *parent = nullptr);
	~signupClass();

private:
	Ui::signupClassClass ui;
};

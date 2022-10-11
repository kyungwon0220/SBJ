#pragma once

#include <QMainWindow>
#include "ui_bookinfoClass.h"

class bookinfoClass : public QMainWindow
{
	Q_OBJECT

public:
	bookinfoClass(QWidget *parent = nullptr);
	~bookinfoClass();

private:
	Ui::bookinfoClassClass ui;
};

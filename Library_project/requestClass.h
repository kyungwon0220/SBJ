#pragma once

#include <QMainWindow>
#include "ui_requestClass.h"

class requestClass : public QMainWindow
{
	Q_OBJECT

public:
	requestClass(QWidget *parent = nullptr);
	~requestClass();

private:
	Ui::requestClassClass ui;
};

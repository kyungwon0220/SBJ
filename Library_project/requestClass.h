#pragma once

#include <QMainWindow>
#include <QMessageBox>
#include "ui_requestClass.h"
#include <string>

class requestClass : public QMainWindow
{
	Q_OBJECT

public:
	requestClass(QWidget *parent = nullptr);
	~requestClass();

private:
	Ui::requestClassClass ui;

public slots:
	void storeRequest();

};

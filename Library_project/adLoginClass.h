#pragma once

#include <QMainWindow>
#include <QMessagebox>
#include<string>
#include "ui_adLoginClass.h"
#include "administratorClass.h"
using namespace std;

class adLoginClass : public QMainWindow
{
	Q_OBJECT

public:
	adLoginClass(QWidget *parent = nullptr);
	~adLoginClass();

private:
	Ui::adLoginClassClass ui;
	administratorClass* adclass;

public slots:
	void change_adclass();
};

#pragma once

#include <QMainWindow>
#include "ui_administratorClass.h"

class administratorClass : public QMainWindow
{
	Q_OBJECT

public:
	administratorClass(QWidget *parent = nullptr);
	~administratorClass();

private:
	Ui::administratorClassClass ui;
public slots:
	void change_addbook();
};

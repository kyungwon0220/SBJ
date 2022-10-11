#pragma once

#include <QMainWindow>
#include "ui_selectClass.h"

class selectClass : public QMainWindow
{
	Q_OBJECT

public:
	selectClass(QWidget *parent = nullptr);
	~selectClass();

private:
	Ui::selectClassClass ui;
};

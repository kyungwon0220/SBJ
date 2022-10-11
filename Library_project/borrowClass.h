#pragma once

#include <QMainWindow>
#include "ui_borrowClass.h"

class borrowClass : public QMainWindow
{
	Q_OBJECT

public:
	borrowClass(QWidget *parent = nullptr);
	~borrowClass();

private:
	Ui::borrowClassClass ui;
};

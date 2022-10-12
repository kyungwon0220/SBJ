#pragma once

#include <QMainWindow>
#include <QPixmap>
#include "ui_bookinfoClass.h"
#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <sstream>


class borrowClass;

class bookinfoClass : public QMainWindow
{
	Q_OBJECT

public:
	bookinfoClass(QWidget *parent = nullptr);
	~bookinfoClass();

	void init();

private:
	Ui::bookinfoClassClass ui;
};

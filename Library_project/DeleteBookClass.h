#pragma once

#include <QMainWindow>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "ui_DeleteBookClass.h"

class DeleteBookClass : public QMainWindow
{
	Q_OBJECT

public:
	DeleteBookClass(QWidget *parent = nullptr);
	~DeleteBookClass();
	void init();

private:
	Ui::DeleteBookClassClass ui;
public slots:
	void delete_book();
};

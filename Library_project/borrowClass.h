#pragma once

#include <QMainWindow>
#include <QMessageBox>
#include "ui_borrowClass.h"


class borrowClass : public QMainWindow
{
	Q_OBJECT

public:
	borrowClass(QWidget *parent = nullptr);
	~borrowClass();
	void init();

private:
	Ui::borrowClassClass ui;
public slots:
	void show_book_info();
	void search_book();

};

#include "borrowClass.h"
#include <iostream>
using namespace std;

borrowClass::borrowClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	init();
	
}

borrowClass::~borrowClass()
{}
void borrowClass::init() {
	ui.tableWidget->insertRow(ui.tableWidget->rowCount());
	ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 0, new QTableWidgetItem(QString::number(123)));
	ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 1, new QTableWidgetItem(QString::number(1)));
	ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 2, new QTableWidgetItem("creat"));
	ui.tableWidget->insertRow(ui.tableWidget->rowCount());
	ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 0, new QTableWidgetItem(QString::number(123)));
	ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 1, new QTableWidgetItem(QString::number(2)));
	ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 2, new QTableWidgetItem("max"));
	ui.tableWidget->insertRow(ui.tableWidget->rowCount());
	ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 1, new QTableWidgetItem(QString::number(123)));
	ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 0, new QTableWidgetItem(QString::number(2)));
	ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 2, new QTableWidgetItem("row"));
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
void borrowClass::show_book_info() {
	int row = ui.tableWidget->currentRow();
	cout << row << endl;
	QMessageBox::information(this, "login", QString::number(row+1));
}
void borrowClass::search_book() {
	QList<QTableWidgetItem*> searchItem;

	if (ui.lineEdit->text().isEmpty()) {
		for (int i = 0; i < ui.tableWidget->rowCount(); i++) {
			if (ui.tableWidget->isRowHidden(i)) {
				ui.tableWidget->showRow(i);
			}
		}
		return;
	}
	searchItem = ui.tableWidget->findItems(ui.lineEdit->text(), Qt::MatchExactly | Qt::MatchRecursive);
	//searchItem = ui.tableWidget->findItems(ui.lineEdit->text(), Qt::MatchContains | Qt::MatchRecursive);

	if (searchItem.count() > 0) {
		for (int i = 0; i < ui.tableWidget->rowCount(); i++) {
			ui.tableWidget->hideRow(i);
		}
		for (int i = 0; i < searchItem.count(); i++) {
			ui.tableWidget->showRow(searchItem.at(i)->row());
		}
	}
	else {
		for (int i = 0; i < ui.tableWidget->rowCount(); i++) {
			ui.tableWidget->hideRow(i);
		}
	}
	
}
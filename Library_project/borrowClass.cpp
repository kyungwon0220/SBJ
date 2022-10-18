#include "borrowClass.h"
#include <iostream>
#include "CSVCOLUMN.h"
using namespace std;

extern int rowValue;
borrowClass::borrowClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	init();
	
}

borrowClass::~borrowClass()
{}
string borrowClass::readFileIntoString(const string& path) {
	auto ss = ostringstream{};
	ifstream input_file(path);
	if (!input_file.is_open()) {
		cerr << "Could not" << endl;
		exit(EXIT_FAILURE);
	}
	ss << input_file.rdbuf();
	return ss.str();
}
int borrowClass::returncurrenRow() {
	rowValue = ui.tableWidget->currentRow();
	return rowValue;
}
void borrowClass::init() {

	string filename("book_info.csv");
	string file_contents;
	char delimiter = ',';

	file_contents = readFileIntoString(filename);

	istringstream sstream(file_contents);
	string record;
	int culumn = CsvCulumn(filename);
	string book_info[100][6];
	int i = 0;
	int j = 0;
	while (std::getline(sstream, record)) {
		istringstream line(record);
		while (std::getline(line, record, delimiter)) {
			book_info[i][j] = record;
			j++;
			if (j > 5) {
				j = 0;
				i++;
			}
		}
	}
	for (int i = 0; i < CsvCulumn(filename); i++) {
			ui.tableWidget->insertRow(ui.tableWidget->rowCount());
			ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 0, new QTableWidgetItem(QString::fromLocal8Bit(book_info[i][0])));
			ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 1, new QTableWidgetItem(QString::fromLocal8Bit(book_info[i][1])));
			ui.tableWidget->setItem(ui.tableWidget->rowCount() - 1, 2, new QTableWidgetItem(QString::fromLocal8Bit(book_info[i][2])));
	}
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}
void borrowClass::show_book_info() {
	//extern int row;
	int row = returncurrenRow();
	booki = new bookinfoClass(this);
	//QMessageBox::information(this, "login", QString::number(row));
	booki->show();
}
void borrowClass::borrow_close() {
	close();
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
#include "loginClass.h"

loginClass::loginClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

loginClass::~loginClass()
{}
void loginClass::change_select_ui() {
	hide();
	QString id = ui.lineEdit->text();
	QString passward = ui.lineEdit_2->text();
	if (id == "test" && passward == "test") {
		QMessageBox::information(this, "Login", "Id, Passward correct");
		select = new selectClass(this);
		select->show();
	}
	else {
		QMessageBox::warning(this, "wrong", "error");
	}
}
#include "loginClass.h"
#include "CSVLOGIN.h"

loginClass::loginClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

loginClass::~loginClass()
{}
void loginClass::change_select_ui() {
	QString id = ui.lineEdit->text();
	QString password = ui.lineEdit_2->text();

	string idbuffer = id.toStdString();
	string pwbuffer = password.toStdString();

	if (CsvLogin(idbuffer,pwbuffer) == 0) {
		QMessageBox::information(this, "Login", "Id, Passward correct");
		select = new selectClass(this);
		hide();
		select->show();
	}
	else{
		QMessageBox::warning(this, "Error", "wrong ID or Password ");
	}
}
void loginClass::change_signupClass() {
	signup = new signupClass(this);
	signup->show();
}
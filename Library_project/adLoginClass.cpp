#include "adLoginClass.h"

adLoginClass::adLoginClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

adLoginClass::~adLoginClass()
{}
void adLoginClass::change_adclass() {
	QString qadid = ui.lineEdit->text();
	QString qadpass = ui.lineEdit_2->text();

	string adid = qadid.toStdString();
	string adpass = qadpass.toStdString();

	if (adid == "admin" && adpass == "admin") {
		QMessageBox::information(this, "Login", "Id, Passward correct");
		adclass = new administratorClass(this);
		hide();
		adclass->show();
	}
	else {
		QMessageBox::warning(this, "Error", "wrong ID or Password ");
	}
}

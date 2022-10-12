#include "selectClass.h"

selectClass::selectClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

selectClass::~selectClass()
{}
void selectClass::change_borrowClass() {
	hide();
	borrow = new borrowClass(this);
	borrow->show();
}

void selectClass::change_requestClass() {
	request = new requestClass(this);
	request->show();
}

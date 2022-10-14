#include "administratorClass.h"
#include "AddBookClass.h"

administratorClass::administratorClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

administratorClass::~administratorClass()
{}
void administratorClass::change_addbook() {
	AddBookClass* adbook = new AddBookClass(this);
	adbook->show();
}

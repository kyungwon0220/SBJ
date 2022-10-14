#include "Library_project.h"

Library_project::Library_project(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

Library_project::~Library_project()
{}

void Library_project::change_login_ui() {
    hide();
    login = new loginClass(this);
    login->show();
}
void Library_project::change_adlogin() {
    hide();
    adlogin = new adLoginClass(this);
    adlogin->show();
}
#include "Library_project.h"
#include <QtWidgets/QApplication>

int aaa = 10;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Library_project w;
    w.show();
    return a.exec();
}

/********************************************************************************
** Form generated from reading UI file 'returnBookClass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOKCLASS_H
#define UI_RETURNBOOKCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_returnBookClassClass
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *returnBookClassClass)
    {
        if (returnBookClassClass->objectName().isEmpty())
            returnBookClassClass->setObjectName("returnBookClassClass");
        returnBookClassClass->resize(600, 400);
        centralWidget = new QWidget(returnBookClassClass);
        centralWidget->setObjectName("centralWidget");
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(190, 130, 231, 51));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 210, 111, 41));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 60, 221, 31));
        returnBookClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(returnBookClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        returnBookClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(returnBookClassClass);
        mainToolBar->setObjectName("mainToolBar");
        returnBookClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(returnBookClassClass);
        statusBar->setObjectName("statusBar");
        returnBookClassClass->setStatusBar(statusBar);

        retranslateUi(returnBookClassClass);
        QObject::connect(pushButton, SIGNAL(clicked()), returnBookClassClass, SLOT(return_book()));

        QMetaObject::connectSlotsByName(returnBookClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *returnBookClassClass)
    {
        returnBookClassClass->setWindowTitle(QCoreApplication::translate("returnBookClassClass", "returnBookClass", nullptr));
        pushButton->setText(QCoreApplication::translate("returnBookClassClass", "\353\260\230\353\202\251", nullptr));
        label->setText(QCoreApplication::translate("returnBookClassClass", "\353\260\230\353\202\251\355\225\240 \354\261\205\354\235\230 \354\240\234\353\252\251\354\235\204 \354\240\201\354\226\264\354\243\274\354\204\270\354\232\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class returnBookClassClass: public Ui_returnBookClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOKCLASS_H

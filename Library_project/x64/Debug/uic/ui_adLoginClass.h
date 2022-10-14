/********************************************************************************
** Form generated from reading UI file 'adLoginClass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADLOGINCLASS_H
#define UI_ADLOGINCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adLoginClassClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *adLoginClassClass)
    {
        if (adLoginClassClass->objectName().isEmpty())
            adLoginClassClass->setObjectName("adLoginClassClass");
        adLoginClassClass->resize(425, 334);
        centralWidget = new QWidget(adLoginClassClass);
        centralWidget->setObjectName("centralWidget");
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 200, 81, 31));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 70, 171, 41));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(130, 130, 171, 41));
        adLoginClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(adLoginClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 425, 22));
        adLoginClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(adLoginClassClass);
        mainToolBar->setObjectName("mainToolBar");
        adLoginClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(adLoginClassClass);
        statusBar->setObjectName("statusBar");
        adLoginClassClass->setStatusBar(statusBar);

        retranslateUi(adLoginClassClass);
        QObject::connect(pushButton, SIGNAL(clicked()), adLoginClassClass, SLOT(change_adclass()));

        QMetaObject::connectSlotsByName(adLoginClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *adLoginClassClass)
    {
        adLoginClassClass->setWindowTitle(QCoreApplication::translate("adLoginClassClass", "adLoginClass", nullptr));
        pushButton->setText(QCoreApplication::translate("adLoginClassClass", "login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adLoginClassClass: public Ui_adLoginClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADLOGINCLASS_H

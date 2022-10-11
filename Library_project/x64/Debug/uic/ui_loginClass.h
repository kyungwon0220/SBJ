/********************************************************************************
** Form generated from reading UI file 'loginClass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINCLASS_H
#define UI_LOGINCLASS_H

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

class Ui_loginClassClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *loginClassClass)
    {
        if (loginClassClass->objectName().isEmpty())
            loginClassClass->setObjectName("loginClassClass");
        loginClassClass->resize(475, 628);
        centralWidget = new QWidget(loginClassClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 140, 361, 261));
        label->setStyleSheet(QString::fromUtf8("background-color : rgb(207,229,235)"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(170, 80, 141, 121));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Desktop/UI.Zip/login_ui/log-in (1).png")));
        label_2->setScaledContents(true);
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 210, 221, 31));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(130, 260, 221, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 310, 101, 31));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 350, 101, 31));
        loginClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(loginClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 475, 22));
        loginClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(loginClassClass);
        mainToolBar->setObjectName("mainToolBar");
        loginClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(loginClassClass);
        statusBar->setObjectName("statusBar");
        loginClassClass->setStatusBar(statusBar);

        retranslateUi(loginClassClass);
        QObject::connect(pushButton, SIGNAL(clicked()), loginClassClass, SLOT(change_select_ui()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), loginClassClass, SLOT(change_signupClass()));

        QMetaObject::connectSlotsByName(loginClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *loginClassClass)
    {
        loginClassClass->setWindowTitle(QCoreApplication::translate("loginClassClass", "loginClass", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("loginClassClass", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("loginClassClass", "sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginClassClass: public Ui_loginClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINCLASS_H

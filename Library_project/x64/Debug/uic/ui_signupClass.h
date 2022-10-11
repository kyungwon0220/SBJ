/********************************************************************************
** Form generated from reading UI file 'signupClass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPCLASS_H
#define UI_SIGNUPCLASS_H

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

class Ui_signupClassClass
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *signupClassClass)
    {
        if (signupClassClass->objectName().isEmpty())
            signupClassClass->setObjectName("signupClassClass");
        signupClassClass->resize(475, 628);
        centralWidget = new QWidget(signupClassClass);
        centralWidget->setObjectName("centralWidget");
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(180, 330, 121, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 430, 121, 51));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 80, 111, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(180, 270, 121, 31));
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(180, 210, 121, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 210, 71, 31));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 270, 141, 31));
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(false);
        label_3->setFont(font2);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 330, 71, 31));
        label_4->setFont(font1);
        signupClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(signupClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 475, 22));
        signupClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(signupClassClass);
        mainToolBar->setObjectName("mainToolBar");
        signupClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(signupClassClass);
        statusBar->setObjectName("statusBar");
        signupClassClass->setStatusBar(statusBar);

        retranslateUi(signupClassClass);

        QMetaObject::connectSlotsByName(signupClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *signupClassClass)
    {
        signupClassClass->setWindowTitle(QCoreApplication::translate("signupClassClass", "signupClass", nullptr));
        pushButton->setText(QCoreApplication::translate("signupClassClass", "Signup", nullptr));
        label->setText(QCoreApplication::translate("signupClassClass", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        label_2->setText(QCoreApplication::translate("signupClassClass", "name:", nullptr));
        label_3->setText(QCoreApplication::translate("signupClassClass", "PhoneNumber:", nullptr));
        label_4->setText(QCoreApplication::translate("signupClassClass", "Email", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signupClassClass: public Ui_signupClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPCLASS_H

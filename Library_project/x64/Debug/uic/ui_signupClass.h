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
#include <QtWidgets/QCheckBox>
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
    QLineEdit *lineEdit_6;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QCheckBox *checkBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *signupClassClass)
    {
        if (signupClassClass->objectName().isEmpty())
            signupClassClass->setObjectName("signupClassClass");
        signupClassClass->resize(479, 628);
        centralWidget = new QWidget(signupClassClass);
        centralWidget->setObjectName("centralWidget");
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(180, 250, 121, 31));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(180, 430, 121, 51));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 80, 111, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(180, 190, 121, 31));
        lineEdit_5->setEchoMode(QLineEdit::Password);
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(180, 140, 121, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 140, 31, 31));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 250, 111, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 190, 111, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 300, 51, 31));
        label_6->setFont(font1);
        lineEdit_7 = new QLineEdit(centralWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(180, 300, 121, 31));
        lineEdit_8 = new QLineEdit(centralWidget);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(180, 350, 121, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 350, 121, 31));
        label_7->setFont(font1);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(330, 350, 111, 31));
        label_8->setFont(font1);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 140, 75, 24));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 170, 111, 21));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(330, 200, 111, 20));
        signupClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(signupClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 479, 22));
        signupClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(signupClassClass);
        mainToolBar->setObjectName("mainToolBar");
        signupClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(signupClassClass);
        statusBar->setObjectName("statusBar");
        signupClassClass->setStatusBar(statusBar);

        retranslateUi(signupClassClass);
        QObject::connect(pushButton, SIGNAL(clicked()), signupClassClass, SLOT(signup_done()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), signupClassClass, SLOT(check_duplicate_id()));
        QObject::connect(lineEdit_4, SIGNAL(textChanged(QString)), signupClassClass, SLOT(text_changed()));
        QObject::connect(checkBox, SIGNAL(toggled(bool)), signupClassClass, SLOT(pw_showhide()));

        QMetaObject::connectSlotsByName(signupClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *signupClassClass)
    {
        signupClassClass->setWindowTitle(QCoreApplication::translate("signupClassClass", "signupClass", nullptr));
        pushButton->setText(QCoreApplication::translate("signupClassClass", "Signup", nullptr));
        label->setText(QCoreApplication::translate("signupClassClass", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        label_2->setText(QCoreApplication::translate("signupClassClass", "ID:", nullptr));
        label_4->setText(QCoreApplication::translate("signupClassClass", "pw confirm:", nullptr));
        label_5->setText(QCoreApplication::translate("signupClassClass", "password:", nullptr));
        label_6->setText(QCoreApplication::translate("signupClassClass", "name:", nullptr));
        label_7->setText(QCoreApplication::translate("signupClassClass", "date of birth:", nullptr));
        label_8->setText(QCoreApplication::translate("signupClassClass", "ex: 981201", nullptr));
        pushButton_2->setText(QCoreApplication::translate("signupClassClass", "confirm", nullptr));
        label_3->setText(QCoreApplication::translate("signupClassClass", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">ID not confirmed</span></p></body></html>", nullptr));
        checkBox->setText(QCoreApplication::translate("signupClassClass", "show pw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signupClassClass: public Ui_signupClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPCLASS_H

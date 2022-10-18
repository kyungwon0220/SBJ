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
#include <QtGui/QIcon>
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
    QCheckBox *checkBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLabel *label_2;
    QLineEdit *lineEdit_6;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *lineEdit_7;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_8;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *pushButton_3;
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
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(320, 200, 111, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(330, 140, 75, 24));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 430, 121, 51));
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(170, 140, 121, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(120, 140, 31, 31));
        QFont font;
        font.setPointSize(14);
        label_2->setFont(font);
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(170, 250, 121, 31));
        lineEdit_6->setEchoMode(QLineEdit::Password);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 300, 51, 31));
        label_6->setFont(font);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(320, 350, 111, 31));
        label_8->setFont(font);
        lineEdit_7 = new QLineEdit(centralWidget);
        lineEdit_7->setObjectName("lineEdit_7");
        lineEdit_7->setGeometry(QRect(170, 300, 121, 31));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 80, 111, 41));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(320, 170, 111, 21));
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(170, 190, 121, 31));
        lineEdit_5->setEchoMode(QLineEdit::Password);
        lineEdit_8 = new QLineEdit(centralWidget);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(170, 350, 121, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 350, 121, 31));
        label_7->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(60, 190, 111, 31));
        label_5->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 250, 111, 31));
        label_4->setFont(font);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(10, 10, 51, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background: transparent"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(20, 20));
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
        QObject::connect(checkBox, SIGNAL(toggled(bool)), signupClassClass, SLOT(pw_showhide()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), signupClassClass, SLOT(check_duplicate_id()));
        QObject::connect(lineEdit_4, SIGNAL(textChanged(QString)), signupClassClass, SLOT(text_changed()));
        QObject::connect(pushButton, SIGNAL(clicked()), signupClassClass, SLOT(signup_done()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), signupClassClass, SLOT(signup_close()));

        QMetaObject::connectSlotsByName(signupClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *signupClassClass)
    {
        signupClassClass->setWindowTitle(QCoreApplication::translate("signupClassClass", "signupClass", nullptr));
        checkBox->setText(QCoreApplication::translate("signupClassClass", "show pw", nullptr));
        pushButton_2->setText(QCoreApplication::translate("signupClassClass", "confirm", nullptr));
        pushButton->setText(QCoreApplication::translate("signupClassClass", "Signup", nullptr));
        label_2->setText(QCoreApplication::translate("signupClassClass", "ID:", nullptr));
        label_6->setText(QCoreApplication::translate("signupClassClass", "name:", nullptr));
        label_8->setText(QCoreApplication::translate("signupClassClass", "ex: 981201", nullptr));
        label->setText(QCoreApplication::translate("signupClassClass", "\355\232\214\354\233\220\352\260\200\354\236\205", nullptr));
        label_3->setText(QCoreApplication::translate("signupClassClass", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:700; color:#ff0000;\">ID not confirmed</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("signupClassClass", "date of birth:", nullptr));
        label_5->setText(QCoreApplication::translate("signupClassClass", "password:", nullptr));
        label_4->setText(QCoreApplication::translate("signupClassClass", "pw confirm:", nullptr));
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signupClassClass: public Ui_signupClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPCLASS_H

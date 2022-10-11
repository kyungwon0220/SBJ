/********************************************************************************
** Form generated from reading UI file 'requestClass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTCLASS_H
#define UI_REQUESTCLASS_H

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

class Ui_requestClassClass
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *requestClassClass)
    {
        if (requestClassClass->objectName().isEmpty())
            requestClassClass->setObjectName("requestClassClass");
        requestClassClass->resize(511, 340);
        centralWidget = new QWidget(requestClassClass);
        centralWidget->setObjectName("centralWidget");
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 70, 251, 41));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(250, 200, 81, 41));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(160, 130, 251, 41));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 80, 48, 21));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 140, 48, 16));
        label_2->setFont(font);
        requestClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(requestClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 511, 22));
        requestClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(requestClassClass);
        mainToolBar->setObjectName("mainToolBar");
        requestClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(requestClassClass);
        statusBar->setObjectName("statusBar");
        requestClassClass->setStatusBar(statusBar);

        retranslateUi(requestClassClass);

        QMetaObject::connectSlotsByName(requestClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *requestClassClass)
    {
        requestClassClass->setWindowTitle(QCoreApplication::translate("requestClassClass", "requestClass", nullptr));
        pushButton->setText(QCoreApplication::translate("requestClassClass", "\355\231\225\354\235\270", nullptr));
        label->setText(QCoreApplication::translate("requestClassClass", "\354\240\234\353\252\251", nullptr));
        label_2->setText(QCoreApplication::translate("requestClassClass", "\354\240\200\354\236\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class requestClassClass: public Ui_requestClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTCLASS_H

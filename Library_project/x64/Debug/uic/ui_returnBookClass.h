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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
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
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
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
        lineEdit->setGeometry(QRect(340, 140, 231, 51));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(410, 220, 111, 41));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(370, 90, 221, 31));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(60, 100, 151, 192));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 60, 141, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(300, -10, 331, 371));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 244, 217);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(-40, -10, 341, 371));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 240);"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(230, 10, 141, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_5->setFont(font);
        label_5->setTextFormat(Qt::AutoText);
        returnBookClassClass->setCentralWidget(centralWidget);
        label_4->raise();
        label_3->raise();
        lineEdit->raise();
        pushButton->raise();
        label->raise();
        tableWidget->raise();
        label_2->raise();
        label_5->raise();
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
        QObject::connect(tableWidget, SIGNAL(cellDoubleClicked(int,int)), returnBookClassClass, SLOT(return_bookk()));

        QMetaObject::connectSlotsByName(returnBookClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *returnBookClassClass)
    {
        returnBookClassClass->setWindowTitle(QCoreApplication::translate("returnBookClassClass", "returnBookClass", nullptr));
        pushButton->setText(QCoreApplication::translate("returnBookClassClass", "\353\260\230\353\202\251", nullptr));
        label->setText(QCoreApplication::translate("returnBookClassClass", "\353\260\230\353\202\251\355\225\240 \354\261\205\354\235\230 \354\240\234\353\252\251\354\235\204 \354\240\201\354\226\264\354\243\274\354\204\270\354\232\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("returnBookClassClass", "\353\271\214\353\246\260 \354\261\205", nullptr));
        label_2->setText(QCoreApplication::translate("returnBookClassClass", "\353\260\230\353\202\251\355\225\240 \354\261\205 \354\204\240\355\203\235\355\225\264\354\243\274\354\204\270\354\232\224", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("returnBookClassClass", "RETURN BOOK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class returnBookClassClass: public Ui_returnBookClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOKCLASS_H

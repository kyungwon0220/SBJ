/********************************************************************************
** Form generated from reading UI file 'DeleteBookClass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEBOOKCLASS_H
#define UI_DELETEBOOKCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteBookClassClass
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DeleteBookClassClass)
    {
        if (DeleteBookClassClass->objectName().isEmpty())
            DeleteBookClassClass->setObjectName("DeleteBookClassClass");
        DeleteBookClassClass->resize(475, 628);
        centralWidget = new QWidget(DeleteBookClassClass);
        centralWidget->setObjectName("centralWidget");
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(60, 70, 351, 451));
        DeleteBookClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DeleteBookClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 475, 22));
        DeleteBookClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DeleteBookClassClass);
        mainToolBar->setObjectName("mainToolBar");
        DeleteBookClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DeleteBookClassClass);
        statusBar->setObjectName("statusBar");
        DeleteBookClassClass->setStatusBar(statusBar);

        retranslateUi(DeleteBookClassClass);
        QObject::connect(tableWidget, SIGNAL(cellDoubleClicked(int,int)), DeleteBookClassClass, SLOT(delete_book()));

        QMetaObject::connectSlotsByName(DeleteBookClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteBookClassClass)
    {
        DeleteBookClassClass->setWindowTitle(QCoreApplication::translate("DeleteBookClassClass", "DeleteBookClass", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DeleteBookClassClass", "\354\203\210 \355\226\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DeleteBookClassClass", "\354\240\234\353\252\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DeleteBookClassClass", "\354\266\234\355\214\220\354\202\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteBookClassClass: public Ui_DeleteBookClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEBOOKCLASS_H

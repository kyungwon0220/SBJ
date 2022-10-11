/********************************************************************************
** Form generated from reading UI file 'borrowClass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWCLASS_H
#define UI_BORROWCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_borrowClassClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *borrowClassClass)
    {
        if (borrowClassClass->objectName().isEmpty())
            borrowClassClass->setObjectName("borrowClassClass");
        borrowClassClass->resize(475, 628);
        centralWidget = new QWidget(borrowClassClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, 120, 510, 351));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Desktop/UI.Zip/select_ui/background.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(-10, 120, 571, 351));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Desktop/UI.Zip/borrow_ui/\353\266\210\355\210\254\353\252\205.png")));
        comboBox = new QComboBox(centralWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(40, 210, 101, 31));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(160, 210, 191, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(370, 210, 75, 31));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(70, 270, 351, 261));
        borrowClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(borrowClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 475, 22));
        borrowClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(borrowClassClass);
        mainToolBar->setObjectName("mainToolBar");
        borrowClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(borrowClassClass);
        statusBar->setObjectName("statusBar");
        borrowClassClass->setStatusBar(statusBar);

        retranslateUi(borrowClassClass);

        QMetaObject::connectSlotsByName(borrowClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *borrowClassClass)
    {
        borrowClassClass->setWindowTitle(QCoreApplication::translate("borrowClassClass", "borrowClass", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("borrowClassClass", "\354\240\234\353\252\251+\354\240\200\354\236\220", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("borrowClassClass", "\354\240\234\353\252\251", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("borrowClassClass", "\354\240\200\354\236\220", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("borrowClassClass", "\354\266\234\355\214\220\354\202\254", nullptr));

        pushButton->setText(QCoreApplication::translate("borrowClassClass", "\352\262\200\354\203\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class borrowClassClass: public Ui_borrowClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWCLASS_H

/********************************************************************************
** Form generated from reading UI file 'administratorClass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATORCLASS_H
#define UI_ADMINISTRATORCLASS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_administratorClassClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *administratorClassClass)
    {
        if (administratorClassClass->objectName().isEmpty())
            administratorClassClass->setObjectName("administratorClassClass");
        administratorClassClass->resize(475, 628);
        centralWidget = new QWidget(administratorClassClass);
        centralWidget->setObjectName("centralWidget");
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 230, 101, 81));
        pushButton->setStyleSheet(QString::fromUtf8("background-color : rgb(247,234,193)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/select_ui/book2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(40, 40));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 230, 101, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color : rgb(247,234,193)"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/select_ui/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(40, 40));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(340, 230, 101, 81));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color : rgb(247,234,193)"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/select_ui/manual.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(40, 40));
        administratorClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(administratorClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 475, 22));
        administratorClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(administratorClassClass);
        mainToolBar->setObjectName("mainToolBar");
        administratorClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(administratorClassClass);
        statusBar->setObjectName("statusBar");
        administratorClassClass->setStatusBar(statusBar);

        retranslateUi(administratorClassClass);
        QObject::connect(pushButton, SIGNAL(clicked()), administratorClassClass, SLOT(change_addbook()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), administratorClassClass, SLOT(change_deletebook()));

        QMetaObject::connectSlotsByName(administratorClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *administratorClassClass)
    {
        administratorClassClass->setWindowTitle(QCoreApplication::translate("administratorClassClass", "administratorClass", nullptr));
        pushButton->setText(QCoreApplication::translate("administratorClassClass", "\354\266\224\352\260\200", nullptr));
        pushButton_2->setText(QCoreApplication::translate("administratorClassClass", "\354\202\255\354\240\234", nullptr));
        pushButton_3->setText(QCoreApplication::translate("administratorClassClass", "\355\232\214\354\233\220\352\264\200\353\246\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class administratorClassClass: public Ui_administratorClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATORCLASS_H

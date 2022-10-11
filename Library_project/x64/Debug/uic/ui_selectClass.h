/********************************************************************************
** Form generated from reading UI file 'selectClass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCLASS_H
#define UI_SELECTCLASS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_selectClassClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *selectClassClass)
    {
        if (selectClassClass->objectName().isEmpty())
            selectClassClass->setObjectName("selectClassClass");
        selectClassClass->resize(475, 628);
        centralWidget = new QWidget(selectClassClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-50, 100, 571, 351));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Desktop/UI.Zip/select_ui/background.png")));
        label->setScaledContents(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(40, 240, 101, 81));
        pushButton->setStyleSheet(QString::fromUtf8("background-color : rgb(247,234,193)"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/select_ui/book2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(40, 40));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(190, 240, 101, 81));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color : rgb(247,234,193)"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/select_ui/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(40, 40));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(340, 240, 101, 81));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color : rgb(247,234,193)"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/select_ui/manual.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(40, 40));
        selectClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(selectClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 475, 22));
        selectClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(selectClassClass);
        mainToolBar->setObjectName("mainToolBar");
        selectClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(selectClassClass);
        statusBar->setObjectName("statusBar");
        selectClassClass->setStatusBar(statusBar);

        retranslateUi(selectClassClass);
        QObject::connect(pushButton, SIGNAL(clicked()), selectClassClass, SLOT(change_borrowClass()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), selectClassClass, SLOT(change_requestClass()));

        QMetaObject::connectSlotsByName(selectClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *selectClassClass)
    {
        selectClassClass->setWindowTitle(QCoreApplication::translate("selectClassClass", "selectClass", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("selectClassClass", "\353\214\200\354\227\254", nullptr));
        pushButton_2->setText(QCoreApplication::translate("selectClassClass", "\353\260\230\353\202\251", nullptr));
        pushButton_3->setText(QCoreApplication::translate("selectClassClass", "\354\232\224\354\262\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selectClassClass: public Ui_selectClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCLASS_H

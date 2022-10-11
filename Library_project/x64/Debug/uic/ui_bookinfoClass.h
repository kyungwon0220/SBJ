/********************************************************************************
** Form generated from reading UI file 'bookinfoClass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFOCLASS_H
#define UI_BOOKINFOCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookinfoClassClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *book_photo;
    QLabel *book_name;
    QLabel *book_info;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *bookinfoClassClass)
    {
        if (bookinfoClassClass->objectName().isEmpty())
            bookinfoClassClass->setObjectName("bookinfoClassClass");
        bookinfoClassClass->resize(475, 475);
        centralWidget = new QWidget(bookinfoClassClass);
        centralWidget->setObjectName("centralWidget");
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 360, 75, 24));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 360, 75, 24));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(320, 360, 75, 24));
        book_photo = new QLabel(centralWidget);
        book_photo->setObjectName("book_photo");
        book_photo->setGeometry(QRect(50, 50, 161, 201));
        book_name = new QLabel(centralWidget);
        book_name->setObjectName("book_name");
        book_name->setGeometry(QRect(250, 40, 191, 51));
        book_info = new QLabel(centralWidget);
        book_info->setObjectName("book_info");
        book_info->setGeometry(QRect(260, 150, 181, 141));
        bookinfoClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(bookinfoClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 475, 22));
        bookinfoClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(bookinfoClassClass);
        mainToolBar->setObjectName("mainToolBar");
        bookinfoClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(bookinfoClassClass);
        statusBar->setObjectName("statusBar");
        bookinfoClassClass->setStatusBar(statusBar);

        retranslateUi(bookinfoClassClass);

        QMetaObject::connectSlotsByName(bookinfoClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *bookinfoClassClass)
    {
        bookinfoClassClass->setWindowTitle(QCoreApplication::translate("bookinfoClassClass", "bookinfoClass", nullptr));
        pushButton->setText(QCoreApplication::translate("bookinfoClassClass", "\353\214\200\354\227\254", nullptr));
        pushButton_2->setText(QCoreApplication::translate("bookinfoClassClass", "\354\230\210\354\225\275", nullptr));
        pushButton_3->setText(QCoreApplication::translate("bookinfoClassClass", "\354\265\234\354\206\214", nullptr));
        book_photo->setText(QString());
        book_name->setText(QString());
        book_info->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bookinfoClassClass: public Ui_bookinfoClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFOCLASS_H

/********************************************************************************
** Form generated from reading UI file 'Library_project.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_PROJECT_H
#define UI_LIBRARY_PROJECT_H

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

class Ui_Library_projectClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Library_projectClass)
    {
        if (Library_projectClass->objectName().isEmpty())
            Library_projectClass->setObjectName("Library_projectClass");
        Library_projectClass->resize(475, 628);
        centralWidget = new QWidget(Library_projectClass);
        centralWidget->setObjectName("centralWidget");
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 481, 441));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Desktop/UI.Zip/main_ui/8608.jpg")));
        label->setScaledContents(true);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 51, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background: transparent"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/main_ui/free-icon-cogwheel-97777.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 470, 181, 71));
        QFont font;
        font.setBold(true);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("background: transparent"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/main_ui/enter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(40, 40));
        Library_projectClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Library_projectClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 475, 22));
        Library_projectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Library_projectClass);
        mainToolBar->setObjectName("mainToolBar");
        Library_projectClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Library_projectClass);
        statusBar->setObjectName("statusBar");
        Library_projectClass->setStatusBar(statusBar);

        retranslateUi(Library_projectClass);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Library_projectClass, SLOT(change_login_ui()));

        QMetaObject::connectSlotsByName(Library_projectClass);
    } // setupUi

    void retranslateUi(QMainWindow *Library_projectClass)
    {
        Library_projectClass->setWindowTitle(QCoreApplication::translate("Library_projectClass", "Library_project", nullptr));
        label->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Library_projectClass", "    LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Library_projectClass: public Ui_Library_projectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_PROJECT_H

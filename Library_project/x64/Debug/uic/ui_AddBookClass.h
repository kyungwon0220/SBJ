/********************************************************************************
** Form generated from reading UI file 'AddBookClass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKCLASS_H
#define UI_ADDBOOKCLASS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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

class Ui_AddBookClassClass
{
public:
    QWidget *centralWidget;
    QLineEdit *book_name;
    QLineEdit *book_author;
    QLineEdit *book_publishing;
    QLineEdit *book_contents;
    QLineEdit *book_number;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;
    QLabel *label_6;
    QLineEdit *book_image;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AddBookClassClass)
    {
        if (AddBookClassClass->objectName().isEmpty())
            AddBookClassClass->setObjectName("AddBookClassClass");
        AddBookClassClass->resize(600, 442);
        centralWidget = new QWidget(AddBookClassClass);
        centralWidget->setObjectName("centralWidget");
        book_name = new QLineEdit(centralWidget);
        book_name->setObjectName("book_name");
        book_name->setGeometry(QRect(190, 30, 221, 41));
        book_name->setEchoMode(QLineEdit::Normal);
        book_author = new QLineEdit(centralWidget);
        book_author->setObjectName("book_author");
        book_author->setGeometry(QRect(190, 90, 221, 41));
        book_publishing = new QLineEdit(centralWidget);
        book_publishing->setObjectName("book_publishing");
        book_publishing->setGeometry(QRect(190, 150, 221, 41));
        book_contents = new QLineEdit(centralWidget);
        book_contents->setObjectName("book_contents");
        book_contents->setGeometry(QRect(190, 210, 221, 41));
        book_number = new QLineEdit(centralWidget);
        book_number->setObjectName("book_number");
        book_number->setGeometry(QRect(190, 270, 221, 41));
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 40, 81, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 90, 81, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 150, 81, 31));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 210, 81, 31));
        label_4->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 270, 81, 31));
        label_5->setFont(font);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(480, 30, 81, 71));
        QFont font1;
        font1.setPointSize(11);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background: transparent"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/more.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(45, 45));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 330, 81, 31));
        label_6->setFont(font);
        book_image = new QLineEdit(centralWidget);
        book_image->setObjectName("book_image");
        book_image->setGeometry(QRect(190, 330, 221, 41));
        AddBookClassClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AddBookClassClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 600, 22));
        AddBookClassClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AddBookClassClass);
        mainToolBar->setObjectName("mainToolBar");
        AddBookClassClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AddBookClassClass);
        statusBar->setObjectName("statusBar");
        AddBookClassClass->setStatusBar(statusBar);

        retranslateUi(AddBookClassClass);
        QObject::connect(pushButton, SIGNAL(clicked()), AddBookClassClass, SLOT(add_book()));

        QMetaObject::connectSlotsByName(AddBookClassClass);
    } // setupUi

    void retranslateUi(QMainWindow *AddBookClassClass)
    {
        AddBookClassClass->setWindowTitle(QCoreApplication::translate("AddBookClassClass", "AddBookClass", nullptr));
        book_name->setInputMask(QString());
        label->setText(QCoreApplication::translate("AddBookClassClass", "\354\240\234\353\252\251", nullptr));
        label_2->setText(QCoreApplication::translate("AddBookClassClass", "\354\240\200\354\236\220", nullptr));
        label_3->setText(QCoreApplication::translate("AddBookClassClass", "\354\266\234\355\214\220\354\202\254", nullptr));
        label_4->setText(QCoreApplication::translate("AddBookClassClass", "\353\202\264\354\232\251", nullptr));
        label_5->setText(QCoreApplication::translate("AddBookClassClass", "\354\261\205 \354\210\230", nullptr));
        pushButton->setText(QString());
        label_6->setText(QCoreApplication::translate("AddBookClassClass", "\354\235\264\353\257\270\354\247\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBookClassClass: public Ui_AddBookClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKCLASS_H

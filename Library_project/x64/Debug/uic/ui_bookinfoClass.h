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
    QLabel *book_author;
    QLabel *book_num;
    QLabel *label;
    QLabel *label_2;
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
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/select_ui/book2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(210, 360, 75, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/select_ui/manual.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(320, 360, 75, 24));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../Desktop/UI.Zip/main_ui/enter.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        book_photo = new QLabel(centralWidget);
        book_photo->setObjectName("book_photo");
        book_photo->setGeometry(QRect(30, 30, 171, 221));
        book_photo->setScaledContents(true);
        book_name = new QLabel(centralWidget);
        book_name->setObjectName("book_name");
        book_name->setGeometry(QRect(230, 80, 191, 51));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        book_name->setFont(font);
        book_name->setStyleSheet(QString::fromUtf8(""));
        book_name->setMidLineWidth(0);
        book_name->setAlignment(Qt::AlignCenter);
        book_info = new QLabel(centralWidget);
        book_info->setObjectName("book_info");
        book_info->setGeometry(QRect(30, 270, 411, 71));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(book_info->sizePolicy().hasHeightForWidth());
        book_info->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(11);
        book_info->setFont(font1);
        book_info->setAcceptDrops(true);
        book_info->setStyleSheet(QString::fromUtf8("style=\"word-break: break-all;\n"
""));
        book_info->setFrameShape(QFrame::NoFrame);
        book_info->setLineWidth(1);
        book_info->setTextFormat(Qt::PlainText);
        book_info->setAlignment(Qt::AlignCenter);
        book_author = new QLabel(centralWidget);
        book_author->setObjectName("book_author");
        book_author->setGeometry(QRect(230, 150, 191, 51));
        book_author->setFont(font);
        book_author->setStyleSheet(QString::fromUtf8(""));
        book_author->setMidLineWidth(0);
        book_author->setAlignment(Qt::AlignCenter);
        book_num = new QLabel(centralWidget);
        book_num->setObjectName("book_num");
        book_num->setGeometry(QRect(230, 10, 71, 41));
        QFont font2;
        font2.setPointSize(10);
        book_num->setFont(font2);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 280, 321, 151));
        label->setStyleSheet(QString::fromUtf8("background : rgb(255, 252, 233)"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, -90, 451, 221));
        label_2->setStyleSheet(QString::fromUtf8("background : rgb(255, 252, 233)"));
        bookinfoClassClass->setCentralWidget(centralWidget);
        label_2->raise();
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        book_photo->raise();
        book_name->raise();
        book_info->raise();
        book_author->raise();
        book_num->raise();
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
        QObject::connect(pushButton_3, SIGNAL(clicked()), bookinfoClassClass, SLOT(info_close()));
        QObject::connect(pushButton, SIGNAL(clicked()), bookinfoClassClass, SLOT(borrow_book()));

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
        book_author->setText(QString());
        book_num->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bookinfoClassClass: public Ui_bookinfoClassClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFOCLASS_H

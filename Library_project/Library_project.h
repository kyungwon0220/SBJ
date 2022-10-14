#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Library_project.h"
#include "loginClass.h"
#include "adLoginClass.h"

class Library_project : public QMainWindow
{
    Q_OBJECT

public:
    Library_project(QWidget *parent = nullptr);
    ~Library_project();

private:
    Ui::Library_projectClass ui;
    loginClass* login;
    adLoginClass* adlogin;

public slots:
    void change_login_ui();
    void change_adlogin();
};

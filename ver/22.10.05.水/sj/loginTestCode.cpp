void KioskLibrary::pushButton_Login_clicked()
{
    //QMessageBox::information(this, "Title", "Hello");
    QString id = ui.lineEdit_Id->text();
    QString passward = ui.lineEdit_Passward->text();
    if (id == "test" && passward == "test") {
        QMessageBox::information(this, "Login", "Id, Passward correct");
        Dialog win2;
        hide();
        win2.show();
        win2.exec();

    }
    else {
        QMessageBox::warning(this, "wrong","asf");
    }

}
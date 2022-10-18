#include "signupClass.h"
#include "CSVREGISTER.h"	//����ȸ���������� csv���Ͽ� �Է�
#include "CHECKID.h"		//���� ���̵� �ߺ�Ȯ��	
#include <QIntValidator>	//������� ���ڷθ� �ޱ�


signupClass::signupClass(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.label_3->setText("ID not confirmed");	// ID not confirmed ������ ID �ߺ�Ȯ�� Ŭ���ߴ��� üũ�ϱ� ���� �ʱ���� ����
	ui.label_3->setStyleSheet("color:red;" "font-weight:700");
	ui.lineEdit_8->setValidator(new QIntValidator); // ������� ���ڷθ� �ޱ�
}

signupClass::~signupClass()
{}

void signupClass::signup_done()
{
	QString id_confirm = ui.label_3->text();
	QString id = ui.lineEdit_4->text();
	QString password = ui.lineEdit_5->text();
	QString password_confirm = ui.lineEdit_6->text();
	QString name = ui.lineEdit_7->text();
	QString dob = ui.lineEdit_8->text();
	int n = dob.size(); //�������
	//�ѱ� ���� ����
	QByteArray bytes = name.toLocal8Bit();
	const char* name_hangul = bytes.data();

	// csv�� �ֱ����� string���� ��ȯ
	string idbuffer = id.toStdString();
	string pwbuffer = password.toStdString();
	string pwconbuffer = password_confirm.toStdString();
	string namebuffer = name.toStdString();
	string dobbuffer = dob.toStdString();



	if (id_confirm == "ID not confirmed") {  // ID �ߺ�Ȯ�� 
		QMessageBox::warning(this, "ID should be confirmed", "Please confirm ID");
	}
	else if (n != 6) {  // ������� ������ 6�ڸ�
		QMessageBox::warning(this, "wrong", "please check date of birth again");
	}
	// ��ĭ �ְų� ��й�ȣ 2�� �Է½ÿ� ���� �ٸ��� ���
	else if (pwbuffer == pwconbuffer && (id != "" && password != "" && password_confirm != "" && name != "" && dob != ""))
	{
		QMessageBox::information(this, "Register", "Registration Sucess");
		CsvRegister(idbuffer, pwbuffer, pwconbuffer, name_hangul, dobbuffer);
		close();
	}

	else {
		QMessageBox::warning(this, "wrong", "password does not match or slot empty");
	}
}

void signupClass::check_duplicate_id() // ID �ߺ�Ȯ�� 
{
	QString id = ui.lineEdit_4->text();
	string idbuffer = id.toStdString();


	if (Checkid(idbuffer) == 0) {
		QMessageBox::warning(this, "Duplicate ID", "ID already exist");
		ui.label_3->setText("ID not confirmed");
		ui.label_3->setStyleSheet("color:red;" "font-weight:700");
	}
	else if (id == "") {
		QMessageBox::warning(this, "empty", "please check ID again");
	}

	else {
		QMessageBox::information(this, "ID confirmed", "You can use this ID");
		ui.label_3->setText("ID confirmed");
		ui.label_3->setStyleSheet("color:green;" "font-weight:700");
	}

}

void signupClass::text_changed() // �Է��ߴ� ID �ٲ�� �ٽ� �ߺ�üũ 
{
	ui.label_3->setText("ID not confirmed");
	ui.label_3->setStyleSheet("color:red;" "font-weight:700");
}

void signupClass::pw_showhide() // ��й�ȣ show % hide
{

	QCheckBox* showhide = new QCheckBox;
	QLineEdit* line5 = new QLineEdit;
	QLineEdit* line6 = new QLineEdit;
	line5 = ui.lineEdit_5;
	line6 = ui.lineEdit_6;
	showhide = ui.checkBox;

	line5->setEchoMode(showhide->checkState() == Qt::Checked ? QLineEdit::Normal : QLineEdit::Password);
	line6->setEchoMode(showhide->checkState() == Qt::Checked ? QLineEdit::Normal : QLineEdit::Password);
}

void signupClass::signup_close()
{
	close();
}

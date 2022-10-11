#include "signupClass.h"
#include "CSVREGISTER.h"	//유저회원가입정보 csv파일에 입력
#include "CHECKID.h"		//유저 아이디 중복확인	
#include <QIntValidator>	//생년원일 숫자로만 받기


signupClass::signupClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.label_3->setText("ID not confirmed");	// ID not confirmed 문구로 ID 중복확인 클릭했는지 체크하기 위해 초기상태 지정
	ui.label_3->setStyleSheet("color:red;" "font-weight:700"); 
	ui.lineEdit_8->setValidator(new QIntValidator); // 생년월일 숫자로만 받기
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
	int n = dob.size(); //생년월일

	// csv에 넣기위해 string으로 변환
	string idbuffer = id.toStdString();
	string pwbuffer = password.toStdString();
	string pwconbuffer = password_confirm.toStdString();
	string namebuffer = name.toStdString();
	string dobbuffer = dob.toStdString();
	

	if (id_confirm == "ID not confirmed"){  // ID 중복확인 
		QMessageBox::warning(this, "ID should be confirmed", "Please confirm ID");
	}
	else if (n != 6) {  // 생년월일 무조건 6자리
		QMessageBox::warning(this, "wrong", "please check date of birth again");
	}
	// 빈칸 있거나 비밀번호 2번 입력시에 서로 다르면 경고
	else if (pwbuffer == pwconbuffer && (id != "" && password != "" && password_confirm != "" && name != "" && dob != "")) 
	{
			QMessageBox::information(this, "Register", "Registration Sucess");
			CsvRegister(idbuffer, pwbuffer, pwconbuffer, namebuffer, dobbuffer);
			close();
	}
		
	else {
		QMessageBox::warning(this, "wrong", "password does not match or slot empty");
		}
}

void signupClass::check_duplicate_id() // ID 중복확인 
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

	else{
		QMessageBox::information(this, "ID confirmed", "You can use this ID");
		ui.label_3->setText("ID confirmed");
		ui.label_3->setStyleSheet("color:green;" "font-weight:700");
	}

}

void signupClass::text_changed() // 입력했던 ID 바뀌면 다시 중복체크 
{
	ui.label_3->setText("ID not confirmed");
	ui.label_3->setStyleSheet("color:red;" "font-weight:700");
}

void signupClass::pw_showhide() // 비밀번호 show % hide
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


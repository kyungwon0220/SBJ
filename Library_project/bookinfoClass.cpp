#include "bookinfoClass.h"
#include "borrowClass.h"

using namespace std;

bookinfoClass::bookinfoClass(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	init();
	
	
}

bookinfoClass::~bookinfoClass()
{}

void bookinfoClass::init() {

	vector<string>bufferout;
	string bookBuffer;
	borrowClass bc;
	int row = bc.returncurrenRow();

	int searchrow = row * 6;

	ifstream myfile("C:\\Users\\KOSTA\\Desktop\\book_info\\book_info\\book_info.csv");
	while (myfile.peek() != EOF) {

		getline(myfile, bookBuffer);
		istringstream ss(bookBuffer);

		while (getline(ss, bookBuffer, ',')) {
			bufferout.push_back(bookBuffer);
		}

	}
	
	QString bname = QString::fromLocal8Bit(bufferout[searchrow]);
	QString bauthor = QString::fromLocal8Bit(bufferout[searchrow + 1]);
	QString binfo = QString::fromLocal8Bit(bufferout[searchrow +3]);
	QString bimage = QString::fromLocal8Bit(bufferout[searchrow + 5]);
	ui.book_name->setText(bname);
	ui.book_info->setText(binfo);
	ui.book_author->setText(bauthor);
	QPixmap pix(bimage);
	ui.book_photo->setPixmap(pix);



}

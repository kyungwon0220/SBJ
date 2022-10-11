#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <sstream>
using namespace std;


int main() {
    int AccountLine = 0;
    int PasswordLine = 1;
    string AccountNameVelue = "계정명";
    string PasswordNameVelue = "암호명";
    string LoginReadingBuffer;
    vector<string>bufferout;
    string CompareBuffer;


    cout << "계정명을 입력하시오" << endl;
    cin >> AccountNameVelue;
    cout << "비밀번호를 입력하시오" << endl;
    cin >> PasswordNameVelue;

    // 생성자로 파일을 바로 엽니다. open() 도 가능
    ifstream myfile("Account_info.csv");
    while (myfile.peek() != EOF) {
        bufferout.clear();

        //엑셀파일에서 버퍼로 한줄을 읽어왔다
        getline(myfile, LoginReadingBuffer);
        istringstream ss(LoginReadingBuffer);

        //vector인 bufferout에 buffer의 내용이 들어갔다.
        while (getline(ss, LoginReadingBuffer, ',')) {
            bufferout.push_back(LoginReadingBuffer);
		        }
						//비교용 버퍼에 csv에 미리 저장된 계정을 갖고왔다
            CompareBuffer = bufferout[AccountLine];
            //만약 입력한 계정과 버퍼에 저장된 계정이 같다면
            if (CompareBuffer.compare(AccountNameVelue) == 0) {
								//버퍼에 csv에 미리 저장된 비밀번호를 갖고왔다
                CompareBuffer = bufferout[PasswordLine];
								//만일 입력한 비밀번호와 버퍼에 저장된 값이 같다면
                if (CompareBuffer.compare(PasswordNameVelue) == 0) {
                    cout << "로그인에 성공했습니다" << endl;
                    myfile.close();
                    return 0;
                }
								//만약 비밀번호가 같지 않다면
                else {
                    cout << "비밀번호가 틀렸습니다" << endl;
                }
                myfile.close();
                return 0;
            }        
	  }
		//파일의 모든 줄을 읽었음에도 동일한 내용이 없다면
    myfile.close();
    cout << "존재하지 않는 계정명 입니다." << endl;
    return 0;
}
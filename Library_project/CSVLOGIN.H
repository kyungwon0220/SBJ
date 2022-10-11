#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <sstream>
using namespace std;
string globaluserid;

int CsvLogin(string Acc, string Pwd) {
    int AccountLine = 0;
    int PasswordLine = 1;
    string AccountNameVelue = Acc;
    string PasswordNameVelue = Pwd;
    string LoginReadingBuffer;
    vector<string>bufferout;
    string CompareBuffer;

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
            CompareBuffer = bufferout[AccountLine];
            //bufferout의 특정배열이 기준과 내용이 같다면
            if (CompareBuffer.compare(AccountNameVelue) == 0) {
                globaluserid = AccountNameVelue;
                CompareBuffer = bufferout[PasswordLine];
                if (CompareBuffer.compare(PasswordNameVelue) == 0) {
                    return 0;
                }
                else{
                    
                }
                return 1;
            }
 
    }
    return 1;
}

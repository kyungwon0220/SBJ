#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <sstream>
using namespace std;
extern string loginuserID;
extern vector<string> loginuserinfo;

int CsvLogin(string acc, string pwd) {

    int accountline = 0;
    int passwordline = 1;
    string accountnamevelue = acc;
    string passwordnamevelue = pwd;
    string loginreadingbuffer;
    vector<string>bufferout;
    string comparebuffer;



    // 생성자로 파일을 바로 엽니다. open() 도 가능
    ifstream myfile("Account_info.csv");
    while (myfile.peek() != EOF) {
        bufferout.clear();
        //엑셀파일에서 버퍼로 한줄을 읽어왔다
        getline(myfile, loginreadingbuffer);
        istringstream ss(loginreadingbuffer);
        //vector인 bufferout에 buffer의 내용이 들어갔다.
        while (getline(ss, loginreadingbuffer, ',')) {
            bufferout.push_back(loginreadingbuffer);
        }
        comparebuffer = bufferout[accountline];
        //bufferout의 특정배열이 기준과 내용이 같다면
        if (comparebuffer.compare(accountnamevelue) == 0) {

            loginuserinfo = bufferout;  // 로그인된 유저정보 모든정보 저장

            comparebuffer = bufferout[passwordline];
            if (comparebuffer.compare(passwordnamevelue) == 0) {
                return 0;
            }
            else {

            }
            return 1;
        }

    }
    return 1;
}

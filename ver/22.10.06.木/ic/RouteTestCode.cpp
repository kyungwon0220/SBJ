#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <sstream>
using namespace std;


int main() {
		// string을 배열로 만들기 때문에, 특정 배열의 내용을 찾으려면 int를 입력합니다.
    int WhoisStandard = 0;

		// 해당 배열의 내용이 입력한 내용과 같은지 비교하기위해 string을 입력합니다.
    string WhoisBenchmark;

		//csv에서 값을 1차로 읽어올 버퍼입니다.
    string buffer;

		//1차버퍼가 훼손되었기 때문에, 1차버퍼값을 불러올때의 원본값을 보관하는 버퍼 입니다.
    string bufferanswer;

		//1차 버퍼를 vector 배열로 바꿔줍니다, 구분자를 통해 각 배열을 나눕니다.
    vector<string>bufferout;

		//배열로 바뀐 내용을 string 형식으로 바꿔서 비교하기 위한 버퍼입니다.
    string buffercompare;
		
    cout << "행번호를 입력해주세요" << endl;
    cin >> WhoisStandard;
    cout << "행에서 찾고자 하는 열을 입력해주세요" << endl;
    cin >> WhoisBenchmark;
    // 생성자로 파일을 바로 엽니다. open() 도 가능할것입니다.
    ifstream myfile("TesterLib.csv");  
    while (myfile.peek() != EOF) {
        bufferout.clear();
        //엑셀파일에서 버퍼로 한줄 읽어왔습니다.
        getline(myfile, buffer);

				//앞으로 buffer가 훼손될것이므로, 원본을 복제해둡니다.
        bufferanswer = buffer;
				
				//구분자를 통해 buffer를 분해할것입니다.
        istringstream ss(buffer);

        //buffer를 구분자를 통해 구분하여 bufferout에 넣어주는 반복문 입니다.
        while (getline(ss, buffer, ',')) {
            bufferout.push_back(buffer);
        }

				//bufferout[]내용을 string으로 바꿉니다.
        buffercompare = bufferout[WhoisStandard];

        //buffercompare의 내용이 특정문자열과 같다면, 복제해둔 buffer내용을 출력합니다.
        if (buffercompare.compare(WhoisBenchmark) == 0) {
            cout << bufferanswer << endl;
        }

    }
    myfile.close();

		//놀랍게도 리턴값을 안써도 컴파일이 제대로 돌아갔습니다.
    return 0;
}
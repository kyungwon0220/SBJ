#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int CsvCulumn2(string path) {
	vector<string>bufferout;
	string bookBuffer;

	ifstream myfile(path);
	while (myfile.peek() != EOF) {

		getline(myfile, bookBuffer);
		istringstream ss(bookBuffer);

		while (getline(ss, bookBuffer, ',')) {
			bufferout.push_back(bookBuffer);
		}

	}
	myfile.close();
	int column_num = 0;
	column_num = bufferout.size() / 6;
	return column_num;

}
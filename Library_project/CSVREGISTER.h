#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

void CsvRegister(string Acc, string Pwd, string Pwd_Confirm, string Name, string Dob )
{
        string AccountNameVelue = Acc;
        string PasswordNameVelue = Pwd;
        string PasswordConfrimNameVelue = Pwd_Confirm;
        string Realname = Name;
        string Dateofbirth = Dob;
        ofstream MyFile;
        MyFile.open("Account_info.csv", ios::out | ios::ate | ios::app);
            MyFile << Acc << "," << Pwd << "," << Name << "," << Dob << endl;
        MyFile.close();
    }
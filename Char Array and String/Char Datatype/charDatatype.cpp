#include <iostream>
using namespace std;

int main(){

    cout << "***************** CHAR DATATYPE *****************" << endl;

    char ch1 = 'a';
    char ch2 = 'x';
    char ch3 = '%';
    char ch4 = '9';
    char ch5 = '\n'; // next line character 
    char ch6 = '\t'; 

    cout << (int)ch1 << endl;
    cout << (int)'A' << endl;
    cout << endl;

    // To get position of character 'f' then
    cout <<  (int)'f' - (int)ch1 << endl;   // 5

    cout << endl;
    cout << int('f' - 'a') << endl;         // 5

    cout << endl;
    char ch7 = 'f';

    int pos = ch7 - ch1;
    cout << "Position of character f  = "<< pos << endl;  // 5
    return 0;
}
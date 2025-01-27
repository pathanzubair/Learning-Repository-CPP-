#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(){

    cout << " ************************************* For Each Loop used with Strings *************************************" << endl;

    string str;
    cout << "Enter a string: ";
    // cin >> str;
    getline(cin, str);
    cout << endl;

    for(char ch : str){
        cout << ch << "-";
    }
    cout << endl;

    return 0;
}
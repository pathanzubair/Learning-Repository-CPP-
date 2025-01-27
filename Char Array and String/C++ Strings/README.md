``` cpp
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    cout << " ******************************************* String in C++ *******************************************" << endl;

// NOTE

// 1.Strings are dynamic in nature means size of strings can be changed at run time.
// 2.Like character array we can access any letter in the string i.e str[4].
// 3.String is an OOPs concept where string is a class which can have multiple objects like str1, str2 etc and string class having various methods .


    string str1 = "hello";
    cout << str1;
    cout << endl;
    cout << str1[3];
    cout << endl;
    cout << endl;

    cout << "@@@@@@@@@@@ Taking a string Input @@@@@@@@@@@ " << endl;
    // string str2;
    // cout << "Enter a string: ";
    // cin >> str2;     // Here  if space is encontered then string before will only be printed or stored in the memory
    // cout << endl;
    // cout << "String 2 = " << str2 << endl;
    // cout << endl;

    // Example 1:-
    
    // Enter a string: Castrol engine Oil
    // String 2 = Castrol

    cout << " ########################### Taking string Input along with white spaces ###########################";
    cout << endl;
    // string str3;
    // cout << "Enter the Srting 3 = ";
    // getline(cin, str3);
    // cout << "String 3 = "<< str3;
    // cout << endl;

    string str4;
    cout << "Enter the Srting 4 = ";
    getline(cin, str4, '#');    // Here the string till the third parameter of the getline() method will be stored in the memory
    cout << "String 4 = "<< str4;
    cout << endl;
    cout << str4[2] << endl;
    cout << str4[3] << endl;
    cout << str4[4] << endl;
    cout << str4[5] << endl;
    cout << str4[6] << endl;

    // Example 2:-
    
    // Enter the Srting 4 = hello WOrld, I am coder#
    // String 4 = hello WOrld, I am coder
    return 0;
}
```

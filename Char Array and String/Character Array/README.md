``` cpp
#include <iostream>
#include <cstring>

using namespace std;

int main(){

    cout << "******************* Char Array *******************" << endl;
    char str[5] = {'a','b','c','d','e'};

    cout << str[0] << endl;
    cout << str[1] << endl;
    cout << str[2] << endl;
    cout << str[3] << endl;
    cout << str[4] << endl;

    cout << endl;

    cout << str << endl; // Here all the values stored in the char array will be displayed.While in integer arrays the memeory aaddress of the first element is
    cout << endl;


    char str2[5] = {'a','b','c','d','\0'};
    cout << endl;


    // Creation of the char array using string literal
    // 1. Approach
    char str1048[] = "thursday";
    cout << str1048[0] << endl;
    cout << str1048[1] << endl;
    cout << str1048[2] << endl;
    cout << str1048[3] << endl;
    cout << "All characters = " << str1048 << endl;
    cout << endl;


    // 2nd Approach
    char str1054[9] = "thursday";
    cout << str1054[-1] << endl;    // Nothing will print as the size of the word is 8 but after last letter there is \0 character in the char array
    cout << "hello" << endl;
    cout << endl;

    char ch1056[] = {'q','w','e','r','t','y','\0'};
    cout << ch1056 << endl;
    cout << ch1056[-2] << endl;
    cout << ch1056[0] << endl;
    cout << "Length of the string 1056 = " << strlen(ch1056) << endl;
    cout << endl;

    char ch1103[20] = {'a','s','d','f','g','h'};
    cout << "ch1103 = "<< ch1103 << endl;
    cout << ch1103[7] << endl;  // if last char of the char array not initialised with \0 then garbage values are stored
    cout << "Length of the string = " << strlen(ch1103) << endl;
    cout << endl;

    return 0;
}
```

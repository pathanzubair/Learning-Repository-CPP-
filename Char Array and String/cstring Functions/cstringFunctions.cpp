#include <iostream>
#include <cstring>

using namespace std;

int main(){
    cout << "********************************************* Cstring frequently used Functions ********************************************* " << endl;
    char word1[10];
    char word2[10] = "VS Code";
    char word3[10];


    

    // 1. strcpy(des, src) ----> To copy string from source to destination i.e char to string and string to string
    //     word1 = "Zubair Pathan"; This will throw an error until strcpy() is used as follows

// Example 1
    strcpy(word3,word2);
    cout << "Third Word = " << word3 << endl;

// Example 2
    strcpy(word1,"Zubair Pathan");
    cout << word1 << endl;
    cout << word1[4] << endl;
    cout << endl;


cout << "************************************************ 2nd Function ***********************************************************" << endl;
// Using strcat() two strings can be concatenated and the resulting string is stored in first string.i.e str1 = str1 + str2
char str1[20];
char str2[20];

cout << "Enter String 1: ";
cin >> str1;
cout << endl;

cout << "Enter String 2: ";
cin >> str2;
cout << endl;

strcat(str1,str2);
cout << "After Concatenation" << endl;
cout << "String 1 = " << str1 << endl;
cout << endl;

// No change in string 2
cout << "String 2 = " << str2 << endl;
cout << endl;



cout << "************************************************ 3rd Function ***********************************************************" << endl;
// Using strcmp() two strings are compared and based on comparison (+ve, -ve or 0) any one of the value is returned .

// Example 1:-

// Enter String 3: a
// Enter String 4: b
// The comparison value of str3 and str4 is -1    -----> here 'b' is greater than 'a' so answer is negative

// Example 2:-

// Enter String 3: b
// Enter String 4: a
// The comparison value of str3 and str4 is 1  ------ > here 'a' is less than 'b' so answer is 1

// Example 3:-

// Enter String 3: asdf
// Enter String 4: asdf
// The comparison value of str3 and str4 is 0    ----------> here both strings are equal so answer is 0

// NOTE:-
// Thus answer of comparison depends on second parameter of strcmp(). and here first letter in string 1 is compared with first letter of string 2 , second letter of string 1 with second letter of string 2, etc

char str3[20];
char str4[20];
cout << "Enter String 3: ";
cin >> str3;
cout << endl;

cout << "Enter String 4: ";
cin >> str4;
cout << endl;

cout << "The comparison value of str3 and str4 is " << strcmp(str3,str4) << endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){

    //  Character Pyramid Pattern

//       A 
//       C D
//       E F G
//       H I J K
//       L M N O P



    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "*************************************************" << endl;
    char ch = 'A';
    for(int i = 1; i<=num; i++){
        for(int j = 1; j <= i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
        
    }
    cout << "*************************************************" << endl;
    cout << endl;


    char abc = 'A';
    cout << abc << endl;
    cout << abc++ << endl; 
    cout << abc;
    return 0;
}
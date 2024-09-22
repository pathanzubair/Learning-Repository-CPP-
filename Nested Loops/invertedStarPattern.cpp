#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Program to print Inverted Star Pattern

//      * * * *
//      * * * 
//      * *
//      *

    int num;
    cout << "Enter the number of rows: " << endl;
    cin >> num;

    for(int i = 0; i < num; i++){
        for(int j = 0; j < num - i ; j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl; 
    return 0;
}
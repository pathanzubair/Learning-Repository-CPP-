#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Program to print Half pyramid number pattern

//      1   
//      2 2 
//      3 3 3 
//      4 4 4 4 
//      5 5 5 5 5

    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << endl;
    cout << "*************************************************" << endl;
    for(int i = 1; i<=num; i++){
        for(int j = 1; j <= i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
    cout << "*************************************************" << endl;

    cout << endl; 
    return 0;
}
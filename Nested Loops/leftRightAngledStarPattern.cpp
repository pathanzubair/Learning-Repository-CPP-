#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Program to print following star pattern
//        *
//        **
//        ***
//        ****
//        *****
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    for(int i = 0; i<num; i++){
        for(int j = 0; j<=i; j++){
            cout << "* " ;
        }
        cout << endl;
    }
    cout << endl; 
    return 0;
}
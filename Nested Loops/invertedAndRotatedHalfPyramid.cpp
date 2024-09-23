#include <iostream>
#include <vector>
using namespace std;

int main(){

    // Program to print following pattern
//            *
//           **
//          ***
//         ****
//        *****

    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num-i; j++){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl; 
    return 0;
}
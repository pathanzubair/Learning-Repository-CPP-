#include <iostream>
#include <vector>
using namespace std;

int main(){

    // program to print floyd's pattern
//         1
//         2 3
//         4 5 6
//         7 8 9 10
//         11 12 13 14 15
// 

    int num;
    cout << "Enter a number: "<< endl;
    cin >> num;
    int temp = 1;
    for(int i  = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            cout << temp++ << " ";
        }
        cout << endl;
    }
    cout << endl; 
    return 0;
}
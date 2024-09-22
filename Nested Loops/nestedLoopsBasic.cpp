#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << !"@@@@ Nested loops @@@@" << endl;
    // program to print the following pattern
    // 1 1 1 1
    // 2 2 2 2
    // 3 3 3 3
    // 4 4 4 4

    int num;
    cout << "Enter a number: "<< endl;
    cin >> num;
    for(int i = 1; i<= num ; i++){
        for(int j= 1; j <= num; j++){
            cout << i << "   ";
        }
        cout << endl;
    }

    cout << endl; 
    return 0;
}
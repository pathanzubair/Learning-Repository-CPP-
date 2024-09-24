#include <iostream>
#include <vector>
using namespace std;

int main(){

    // program to print butterfly pattern

//                *      *
//                **    **
//                ***  ***
//                ********
//                ********
//                ***  ***
//                **    **
//                *      *

    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    cout << endl;
    for(int i= 1; i<=num; i++){
        for(int j = 1; j<=i; j++){
            cout << "*"; 
        }
        for(int k = 1; k <= 2*(num-i); k++){
            cout << " ";
        }
        for(int l = 1; l<=i; l++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = num; i>0; i--){
        for(int j = 1; j<=i; j++){
            cout << "*"; 
        }
        for(int k = 1; k <= 2*(num-i); k++){
            cout << " ";
        }
        for(int l = 1; l<=i; l++){
            cout << "*";
        }
        
        
        cout << endl;
    }
        

    
cout << endl;






   cout << endl; 
    return 0;
}
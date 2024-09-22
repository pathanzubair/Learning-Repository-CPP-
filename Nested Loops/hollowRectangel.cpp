#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Program to print hollow Rectangle

//      * * * * * *
//      *         *
//      *         *
//      *         *
//      * * * * * *
    cout << endl; 

    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    
    for(int i = 1; i < num; i++){
        cout << "* " ;
        for(int j = 1; j <= num-1; j++){
            if((i == 1) || (i == num-1)){
                cout << "* " ;
            }
            else{
                cout << "  "; 
            }
        }
        cout << "* " << endl; 
    }
    return 0;
}
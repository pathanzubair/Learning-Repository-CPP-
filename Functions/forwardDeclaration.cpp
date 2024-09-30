#include <iostream>
#include <vector>
using namespace std;


void sayHello();   // function Declaration

int main(){

    cout << "******** Forward Declaration *******"<< endl;
    cout << endl;
    sayHello();
    cout << endl; 
    return 0;
}


void sayHello(){
    cout << "Hello World :)\n";
}
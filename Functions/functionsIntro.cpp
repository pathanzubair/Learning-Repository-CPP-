#include <iostream>
#include <vector>
using namespace std;

void sayHello(){
    cout << "Hello World :)\n";
}

void assistant(){
    sayHello();
    cout << "Work Done :)" << endl;
}

int main(){

    cout << "******** Functions ********" << endl;
    cout << endl;

    // sayHello();

    assistant();
    cout << endl; 
    return 0;
}
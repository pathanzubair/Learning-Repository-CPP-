#include <iostream>
#include <vector>

#define zubair 4
#define ll long long
//  MACROS - these are dufferent from constants and here no need to specify the datatype and macros does not take any extra memeory space

using namespace std;

int main(){

    const int age = 18;
    const float PI = 3.14;
    cout << "pi = " << PI << endl;

    // PI = 3939; // CANNOT BE CHANGED CONSTANT VARIABLE

    int num = 122334;

    cout << "Initial value of num = " << num << endl;

    num = 999;
    cout << "After updating num = " << num << endl;  // CAN BE CHANGED


    // const abc ;
    // abc = 22333;  // NOT ALLOWED AS constant must be initialized at the time of declaration;

    //  MACROS
    cout << "Value of zubair = " << zubair; cout  << endl;

    ll x;
    x = 3849384938493;

    ll y =838383;

    cout << "x = " << x << endl; 
    return 0;
}
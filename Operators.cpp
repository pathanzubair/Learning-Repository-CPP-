#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "************ OPERATORS IN c++ *************" << endl;

// 1. ARITHMETIC OPERATORS
//          TYPES --> 1. BINARY              --> 2.UNARY
//                       -ADDITION                  -INCREMENT
//                       -SUTRACTION                - DECREMENT
//                       -MULITIPLICATION
//                       -DIVISION
//                       -MODULUS

    int a = 4;
    int b = 2;
    cout << "Addition = "       << a + b << endl;
    cout << "Subtraction = "    << a - b << endl;
    cout << "Multiplication = " << a * b << endl;   
    cout << "Division = "       << a / b << endl;   
    cout << "Modulo = "         << a % b << endl;   // remainder
    
    cout << endl;

    int c  = 3;

    cout << "Before using Unary operator , c = " << c << endl;
    c++; // post increment -- print then increment
    cout << "After using Unary operator , c = " << c << endl;
    ++c;
    cout << "After using pre-increment operator c = " << c << endl;  // 5
    cout << endl;
    int d = 70;
    int i = d++;  // use and then increment
    cout << "Value of d = " << d << endl; // 71 
    cout << "Value of i after = " << i << endl;  // 70 (here original value(previous value ) of the value is stored)
    

    cout << endl;

    int e = 99;
    int j = ++e; // increment first then use
    cout << "Value of e = " << e << endl; //100
    cout << "Value of j After = "<< j << endl; //100
    cout << endl; 

    cout << "decrement " << endl;
    int f = 60;  
    int k = f--;  // use and then decrement
    cout << "Value of d = " << f << endl; // 59 
    cout << "Value of k after = " << k << endl;  // 60 (here original value(previous value ) of the value is stored)
    cout << endl;

     // increment first then use
    int g = 55;
    int l = --g; // decrement first then use
    cout << "Value of e = " << g << endl; //54
    cout << "Value of l After = "<< l << endl; //54
    cout << endl;

    cout << "***********  ASSIGNMENT VARIABLES *************" << endl;
    int ao = 320;
    cout << "Original Value = " << ao << endl;
    // +=
    ao += 2;
    cout << "ao += 2 : " << ao << endl;
    
    // -=
    ao -= 2;
    cout << "ao -= 2 : " << ao << endl;

    // *=
    ao *= 2;
    cout << "ao *= 2 : " << ao << endl;

    // /=
    ao /= 2;
    cout << "ao /= 2 : " << ao << endl;

    cout << endl;

    cout << "********** Relatinal OPerators ***************" << endl;
    int ro = 11;
    int ro2 = 89;

    cout << (ro == ro2) << endl; // False -> 0
    cout << (ro <= ro2) << endl; // True -> 1
    cout << (ro >= ro2) << endl; // 0
    cout << (ro != ro2) << endl; // 1

    cout << endl;
    cout << "************ Logical Operators *************" << endl;

    // && (and operator)
    bool b1 = true;
    bool b2 = false;
    cout << (bool)(b1 && b2) << endl;
    
    // || (or operator)
    cout << (b1 || b2) << endl;
    
    // ! (not operator)
    cout << (!b1) << endl;

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "TYPECASTING IN CPP" << endl;
    // Conversion of one datatype into another
    // 2 types
    // 1.Implicit Convesion -- Done by compiler to avoid dataloss
    // 2.Explicit Conversion -- Done by programmer 

    // 1. Implicit COnversion (type Promotion)  

    // bool -> char -> int -> float -> double

    cout << (10/3) << endl;  // (int /int ) --> int
    cout << (10/3.0) << endl; // (int / float or double) --> float or double 

    //  char + int -- here as char is small datatype so compiler converts it to int and adds value to it and outpu
    cout << 'A' + 1 << endl; // 66 as ascii value of A is 65 
    cout << 'A' -0 << endl; //65
    cout << 'a' -0 << endl; // 97


    cout << endl; 

    // 2. Explicit Conversion (forced by programmer)
    cout << (int)'A' << endl;
    float PI = 3.14;
    cout << "PI float value = " << PI << endl;
    cout << "PI int value = " << (int)PI << endl;
    cout << (10/3) << endl;  //3
    cout << (float)(10/3) << endl;  //3
    cout << ((float)10/3) << endl;  // 3.33
    cout << (10/(float)3) << endl;  // 3.33
    cout << 'A' + 1 << endl; // 66
    cout << (char)('A' + 1) << endl; // B
    cout << (bool)('A' + 1) << endl; // B


    // PRACTICE QUESTION 

    cout << "question" << endl;
    cout << 3 + 2 << endl;  // 5
    cout << (bool)3 + 2 << endl;   // 3

    cout << (23.5 + 2 + 'A') << endl;



    return 0;
}
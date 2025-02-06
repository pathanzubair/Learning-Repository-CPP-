``` cpp

#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
#include<stdint.h>

using namespace std;

int main(){
    cout << "************************* Bitwise Operators *************************" << endl;
    // 1.Bitwise AND "&"

    cout << (3 & 5) << endl;   // 1   ,explanation:- 3(0011) and 5(0101) ---> 1(0001)
    cout << endl;
    
    
    // 2.Bitwise OR "|"
    cout << (3 | 5) << endl;   // 7   ,explanation:- 3(0011) or 5(0101) ---> 1(0111)
    cout << endl;
    
    
    
    // 3.Bitwise XOR(^)   ----> same bits :- output - zero  e.g ---> 0^0 ---> 0
    //                     ----> different bits :- output - one   eg ----> 1^0 ---> 1
    cout << (3^5) << endl;   // 6       , explanation :- 3(0011) ^ 5(0101) ----> 6(0110)
    cout << endl;
    
    // 4.NO4T OPERATOR (~)  ------> gives oppposite output:- e.g -----> 0 gives 1 and 1 gives 0
    cout << (~4) << endl;   // 5  Here answer is 2's Complement of the actual number
    cout << endl;
    
    
    // 5.Left Shift Operator 
    cout << "Formula for left shift operation ::: (a << b) ---> a * 2^b" << endl;
    cout << (7 << 3) << endl;   // 28 ------> here shifting of binary digits(0,1) of the 7 are done to the left and given asthe output
    cout << endl;

    // 5.Right Shift Operator
    cout << "Formula for left shift operation ::: (a << b) ---> a / 2^b" << endl;
    cout << (7 >> 2) << endl;   // 1 -----> here shifting of binary digits(0,1) of the 7 are done to the right and given asthe output
    cout << (7 >> 3) << endl;  // 0


    cout << (~4) << endl;
    cout << (~3) << endl;
    cout << (8 >> 1) << endl;
    
    
    
    return 0;
}


```

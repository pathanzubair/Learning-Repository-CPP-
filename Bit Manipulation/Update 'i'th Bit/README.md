``` cpp

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <stdint.h>

using namespace std;


int updateIthBit(int num, int pos, int val){
    if(val == 0){
        int bitmask = ~(1 << pos);
        return (num & bitmask);
    }

    return (num | (1 << pos));
}

int updateIthBit2(int num, int pos, int val){
    num = num & ~(1 << pos);     //   step 1 :-  clear the bit at position given

    num = num | (val << pos);      //   step 2 :- according to givn value update the num

    return num;


}


int main(){
    cout << "******************************************* Update ith Bit *******************************************" << endl;

    int num, pos, val;

    cout << "Enter the number to be updated: ";
    cin >> num;
    cout << endl;
    
    cout << "Enter the position to be updated: ";
    cin >> pos;
    cout << endl;
    
    cout << "Enter the number to be updated: ";
    cin >> val;

    cout << updateIthBit(num, pos, val);
    cout << endl;

    cout << "Another Approach" << endl;
    cout << endl;
    cout << updateIthBit2(7,2,0);
    cout << endl;
    cout << updateIthBit2(7,3,1);
    cout << endl;
    // cout << updateIthBit2(7,2,0);




    return 0;
}
```

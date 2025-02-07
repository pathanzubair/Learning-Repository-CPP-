#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <stdint.h>

using namespace std;

int clearLastIBits(int num , int pos){
    int bitmask = (~0 << pos);
    return (num & bitmask);
}

int main(){
    int num, pos;

    cout << "Enter a number:";
    cin >> num;
    cout << "Enter the position:";
    cin >> pos;
    cout << endl;

    cout << clearLastIBits(num , pos);
    cout << endl;

    // int bitmask = (~0) << pos;

    // cout << (num & bitmask) << endl;

    return 0;
}
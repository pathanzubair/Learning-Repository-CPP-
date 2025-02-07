#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <stdint.h>

using namespace std;


int getIthBit(int num, int pos){

    int mask = (1 << pos);
    if(!(num & mask)){
        return 0;
    }

    return 1;
}


int main(){
    cout << "********************************* Get 'i'th Bit *********************************" << endl;

    cout << (6 & 4) << endl;
    cout << ((5 & 4) >> 2) << endl;

    int num;
    cout << "Enter the number: ";
    cin >> num;
    // cout << endl;

    int pos;
    cout << "Enter the position: ";
    cin >> pos;
    cout << endl;


    cout << "Element at " << pos << "th index = " <<  getIthBit(num,pos) << endl;

    return 0;
}

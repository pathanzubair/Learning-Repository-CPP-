``` cpp
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <stdint.h>

using namespace std;


void clearARangeOfBits(int num, int i, int j){
    int a = (~0) << (j+1);
    int b = 1 << (i-1);

    int bitmask = a | b;
    num = num & bitmask;


    cout << "The number after clearing bits = "  << num << endl;
}
int main(){

    cout << " **************************************************** Clear a Range of Bits ****************************************************" << endl;

    int num, i, j;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter i, j: ";
    cin >> i >> j;
    cout << endl;
    clearARangeOfBits(num, i, j);




    return 0;
}

```

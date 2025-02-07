``` cpp

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <stdint.h>

using namespace std;

int setIthBit(int num, int pos){
    int mask = (1 << pos);
    return (num | mask);
}

int main(){

    cout << "************************************************* Set 'i'th Bit *************************************************"<< endl;

    int num;
    int pos;
    
    cout << "Enter the number:";
    cin >> num;
    

    cout << "Enter the position:";
    cin >> pos;

    cout << "The new number = " << setIthBit(num, pos) << endl;



    return 0;
}
```

``` cpp

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <stdint.h>

using namespace std;
int powerOfTwo(int num){
    if(!(num & (num-1))){
        cout << "Yes a Power of 2\n";
        return 1;
    }
    cout << "No!!! " << num << " is not a power of 2.\n";
    return 0;
}

int main(){
    cout << "******************************** Check For Power of 2 ********************************" << endl;
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << endl;

    powerOfTwo(num);




    return 0;
}
```


``` cpp
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <stdint.h>

using namespace std;
int main(){

    cout << " ******************************** Even Odd Problem using Bitwise operator ******************************** " << endl;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(!(num & 1)){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }

    return 0;
}


```

#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
#include<stdint.h>

using namespace std;


int clearIthBit(int num, int pos){
    int bitmask = ~(1 << pos);
    return (num & bitmask);

}
int main(){
cout << "Clear 'i'th Bit ----> (0 to 0) and (1 to 0)" << endl;

int num, pos;
cout << "Enter a number: ";
cin >> num;
cout << endl;

cout << "Enter position of the bit to clear: ";
cin >> pos;
cout << endl;

cout << clearIthBit(num, pos) << endl;




return 0;
}
#include <iostream>
using namespace std;

void printArray(int *ptrA, int s){
    for(int i = 0; i<s; i++){
        cout << *(ptrA+i) << endl; //*ptrA << endl;
        // ptrA++;
    }

}

int main(){
    
    int a = 4;
    int aa = 99;
    int *ptr = &a;

    ptr++;
    /// Here gap between two values is of 4 bytes because the increment took place as per the int datatype i.e 4 bytes while in char it is of 1 byte.
    cout << "Value of ptr after incrementing: " <<ptr << endl;      //    0x7fffca6c05d0
    cout << "Value of ptr before incrementing: " <<ptr << endl;     // 0x7fffca6c05cc

    cout << endl;
    int b = 88;
    int *ptr2 = &b;
    cout << "Value of ptr2 before decrementing: " <<ptr2 << endl;      // 0x7ffc4b2485e4
    ptr2--;
    cout << "Value of ptr2 after decrementing: " <<ptr2 << endl;      // 0x7ffc4b2485e0
    
    cout << endl;


    // char demo = 'Z';
    // char c = 'A';
    // char *ptr3 = &c;

    // cout << "Value of ptr3 before decrementing: " <<ptr2 << endl;      // 0x7ffc4b2485e0
    // ptr3--;

    // cout << "Value of ptr3 after decrementing:  " <<ptr2 << endl;      // 0x7ffc4b2485e0
    // cout << endl;
    cout << "Value of ptr after incrementing: " <<*ptr << endl;      //    0x7fffca6c05d0

    cout << "********** Pointer Arithmetic with constants **********" << endl;
    int jan = 1;
    int *ptr433 = &jan;
    cout << "Before adding constant = " << ptr433 << endl;
    (ptr433 + 3);
    cout << "After adding constant = " << ptr433 << endl;

    (ptr433 - 3);
    cout << "After decrementing constant = " << ptr433 << endl;



    cout << endl;

    // int feb = 123;
    // int *ptr437 = &feb;
    // cout << "Before adding constant = " << ptr437 << endl;
    // (ptr437 + 3);
    // cout << "After adding constant = " << ptr437 << endl;


    cout << "Using Pointers to access Array element" << endl;
    int arr441[] = {1,2,3,4,5,6,7,8};
    int size = sizeof(arr441)/sizeof(int);
    printArray(arr441, size);

    cout << endl;
    cout << "Addition and subtraction of Two pointers." << endl;

    // NOTE:- Addition cannot be performed beween two Pointers

    int num526 = 23;
    int *ptr526 = &num526;
    int *ptr527 = ptr526 + 3;
    cout << ptr526 << endl;
    cout << ptr527 << endl;

    cout << ptr527 - ptr526 << endl;  // 3 .Since subtraction operation gives the difference of Integers in form of bytes . For that those two pinters should be of the same Datatype.  4 int bytes * 3 integers = 12

    cout << endl;

    int arr532[20] = {1,2,3,4,5,6,7,8};
    int *ptr532  = arr532;
    int *ptr533 = ptr532 + 3;

    cout << *ptr532 << endl;   // 1  
    cout << *ptr533 << endl;    // 4
    cout << ptr533 - ptr532 << endl;    //  3


    cout <<endl;
    
    // NOTE :- Comparison OPeratorion can be performed ont the Pointers like ==, <, >



    return 0;
}
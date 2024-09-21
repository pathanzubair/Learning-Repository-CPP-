#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){

    cout << "########## LOOPs ###########"<< endl;

    cout << "@@@@ for loop @@@@" << endl;

    // program to print numbers
    int num;

    for(num = 1; num <= 5; num++){
        cout << num << " ";
    } 
    cout << "Last value of num = " << num << endl;
    cout << endl;
    
    // program to print sum of n natural numbers

    int sum = 0;
    for(int i  = 1; i<= 100; i++){
        sum += i;
    } 
    cout << "Sum = " << sum << endl;


    cout << endl;

    cout << "@@@@ WHile Loop @@@@" << endl;
    int i = 1;
    while(i <= 5){
        cout << i << " ";
        i++;
    }

    cout << endl;
    cout << endl;

    // Print Square pattern using for loop 
    // ****
    // ****
    // ****
    // ****

    for(int i = 0; i<10; i++){
        for(int j = 0; j < 10; j++){
            cout << "* ";
        }
        cout << endl;
    }

    cout << endl;

    // program to print numbes in reverse order
    for(int i = 10; i>0; i--){
        cout << i << " ";
    } 

    cout << endl;

    // program to print sum of digits of a number
    int num;
    cout << "Enter a number: "<< endl;
    cin >> num;
    int sum = 0;
    while(num>0){
        int temp = num % 10;
        sum += temp;
        num /= 10;
    }
    cout << "Sum of digits = " << sum << endl;

    cout << endl;

    // program to print sum of odd digits of number

    // int num2;
    // cout << "Enter a number : " << endl;
    // cin >> num2;
    // int oddSum = 0;
    // while(num2 > 0){
    //     oddSum += (num2 % 10);
    //     num2 /= 100;
    // }
    // cout << "SUm of odd digits = " << oddSum << endl;

     int num2;
    cout << "Enter a number : " << endl;
    cin >> num2;
    int oddSum = 0;
    while(num2 > 0){
        int val = num2 % 10;
        if (val % 2 != 0){
            oddSum += val;
        }
        num2 /= 10;
    }
    cout << "SUm of odd digits = " << oddSum << endl;

    cout << endl;

    // program to print number in reverse order
    int num3;
    cout << "Enter a number: " << endl;
    cin >> num3;
    int reverse = 0;
    while(num3 > 0){
        int temp = num3 % 10;
        reverse = reverse*10 + temp;
        // reverse *= 10;
        num3 /= 10;

    }
    cout << "reversed number = " << reverse << endl;

    cout << endl;
    cout << "@@@@ Do while loop @@@@" << endl;

    int  d= 1;
    do{
        cout << d << " ";
        d++;
    }while(d<6);


    cout << endl;

    cout << "@@@@ break statement @@@@" << endl;

    int i = 1;

    while(i <= 10){
        if(i == 3){
            break;
        }
        cout << i << " ";
        i++;
    }
    cout << "Out of the loop" << endl;

    cout << endl;
    


    // program to break the loop if enterd number is multiple of 10

    int mul;
    do{
        cout << "Enter a number : " ;
        cin >> mul;
        if(mul % 10 == 0){
            break;
        }
    }while(1<2);

    cout << "Loop terminated" << endl;

    cout << endl;

    cout << "@@@@ continue statement @@@@" << endl;

    // program showing purpose of continue statement 
    for(int i = 1; i <= 10 ; i++){
        if(i == 4){
            continue;
        } 
        cout << i << " ";
    }

    cout << endl;
    cout << endl;

    // program to skip the number if it is multiple of 10

    for(int i = 1; i<=100; i++){
        if(i%10 == 0){
            continue;
        }
        cout << i << " ";
    }

    cout << endl;

    // program to check if number is prime or not 

    int pn;
    cout << "Enter a number : " << endl;
    cin >> pn;
    bool ans = true;
    if(pn == 1){
        cout << "Neither prime nor composite" << endl;
    }
    else{
        for(int i = 2; i<pn ; i++){
            if(pn %i == 0){
                ans = false;
                // cout << "NOT A prime number" << endl;
                break;
            }
        }
        if(ans){
            cout << "Prime" << endl;
        }
        else{
            cout << "Composite" << endl;
        }
    }

    cout << endl;

    // OPTIMIZED APPROACH TO FIND PRIME NUMBER
    int op;
    cout << "Enter a number : " << endl;
    cin >> op;
    // int sqt = op^(1/2);
    bool ans = true;
    if(op == 1){
        cout << "Neither prime nor composite" << endl;
    }
    else{
        for(int i = 2; i<sqrt(op) ; i++){
            if(op %i == 0){
                ans = false;
                // cout << "NOT A prime number" << endl;
                break;
            }
        }
        if(ans){
            cout << "Prime" << endl;
        }
        else{
            cout << "Composite" << endl;
        }
    }
    






    return 0;
}
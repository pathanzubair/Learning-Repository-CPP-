#include <iostream>
#include <vector>
using namespace std;


int sum(int a , int b){     // parameters
    int sum = a + b;
    return sum;
}


int defaultParameter(int c , int d = 1){  // Here first parameter cannot be declared as default variable , it will give error
    int mul = c * d;
    return mul;
}

int main(){

    cout << "******** Syntax With Parameters ********"<< endl;
    
    cout << endl;
    cout << sum(3,5) << endl;
    int s = sum(2,3);  // arguments - fixed values
    cout << "Sum = " << s << endl;
    cout << endl; 

    int m = defaultParameter(3); // 
    int n = defaultParameter(3,2); // 
    cout << "Multiplication = " << m << endl;
    cout << "Multiplication = " << n << endl;
    return 0;
}
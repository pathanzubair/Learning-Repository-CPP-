#include <iostream>
#include <vector>
using namespace std;

int main(){

    cout << "************** Conditional Statements in Cpp *******************" << endl;
    // 4 TYPES -----
    // --1. IF STATEMENT
    // --2. ELSE-IF
    // --3. TERNARY OPERATOR
    // --4. SWITCH STATEMENT

    cout << "@@@@ If else statement @@@@" << endl;
    
    int age; 
    cout << "Enter your age : " << endl;
    cin >> age;
    if(age >= 18){
        cout << "You can vote" << endl;
    }
    else{
        cout << "You cannot vote" << endl;
    }

    cout << endl;
    
    cout << "Even-Odd program" << endl;
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    if(num %2 == 0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }

    cout << endl; 

    cout << "@@@@ Else if statement @@@@" << endl;

    cout << endl;


    // Marks program

    int marks;
    cout <<"Enter your marks: "  << endl;
    cin >> marks;
    if(marks >= 90){
        cout << "A grade" << endl;
    }
    else if(marks<90 && marks >= 75){
        cout << "B grade" << endl;
    }
    else{
        cout << "C grade" << endl;
    }

    // INCOME TAX PROGGRAM

    int salary;
    float tax;
    cout << "Enter your salary (in Lakhs): " << endl;
    cin >> salary;
    if(salary <= 5){
        tax = 0;
    }
    else if(salary < 5 && salary <= 10 ){
        tax = 0.2 * salary;
    }
    else{
        tax = 0.3 * salary;
    }
    cout << "Tax amount you need to pay(in Lakhs) : " << tax * 100000 << endl;

    cout << endl;

    cout << "@@@@ TERNARY OPERATOR @@@@" << endl;

    // SYNATX --> variable = condition? statement 1: statement 2;
    int aged;
    cin >> aged;
    bool isAdult = (aged >= 18) ? true : false;
    cout << isAdult;

    cout << endl;

    // program to check larger of two numbers

    int a;
    int b;
    cout << "Enter two numbers: "<< endl;
    cin >> a >> b;
    int largest = (a > b)? a : b;
    cout << largest << endl;

    // ODD-EVEN program

    int nums;
    cout << "Enter a number: "<< endl;;
    cin >>nums ;
    string ans = nums % 2 == 0 ? "Even" : "Odd";
    cout << ans;


    cout << endl;
    cout << "@@@@ SWITCH STATEMENT @@@@" << endl;

    //  program to print days of week 

    int day;
    cout << "Enter a number(1-7): " << endl;
    cin >> day;

    switch(day){
        case 1:
            cout << "Monday" << endl;
            break;

        case 2:
            cout << "Tuesday" << endl;
            break;

        case 3:
            cout << "Wednesday" << endl;
            break;

        case 4:
            cout << "Thursday" << endl;
            break;

        case 5:
            cout << "Friday" << endl;
            break;

        case 6:
            cout << "Saturday" << endl;
            break;

        default:
            cout << "Sunday" <<  endl;
            // break;    
    }

    return 0;
}
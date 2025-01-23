
``` cpp
#include <iostream>
using namespace std;


void fun1(int mat[][4], int n, int m){
    cout << " ********** Inside first function **********" << endl;
    cout << "0th row = " << mat << endl;
    cout << "1st row = " << mat +1 << endl;
    cout << endl;
    cout << "0th row  value = " << *mat << endl;
    cout << "2nd row value = " << *(mat+1) << endl;
    cout << "1st row value = " << *(mat+2) << endl;
    cout << endl;

}

void fun2(int (*mat)[4], int n, int m){
    cout << "********** Inside second function **********" << endl;
    cout << "0th row = " << mat << endl;
    cout << "1st row = " << mat +1 << endl;
    cout << endl;
}

int main(){

        int mat[4][4] = {{1,2,3,4},
                        {5,6,7,8}, 
                        {9,10,11,12},
                        {13,14,15,16}};

        // Matrix or 2D array pointers always point to the a whole single row not to the single cell

        cout << mat << "=" << &mat[0][0] << endl; // Address of first row matrix i.e 1,2,3,4
        cout << mat+1 << " != " << &mat[0][1] << endl; // Address of first row matrix i.e 5,6,7,8
        cout << mat+1 << " = " << &mat[1][0] << endl; // Address of first row matrix i.e 5,6,7,8
        
        cout << endl;

        fun1(mat,4,4);
        fun2(mat,4,4);

        cout << endl;
        int i = 2;
        int j = 2;
        cout << "Accessing specific element from the matrix: " << endl;
        cout << "Example :- i = 2, j = 2" << endl;
        cout << "Element  using matrix pointers= " << *(*(mat +i) + j) << endl;
        cout << "direct address mat[i][j] = " << mat[i][j] << endl;
    return 0;
}

```

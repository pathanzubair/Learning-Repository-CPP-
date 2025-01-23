#include <iostream>
#include <utility>

using namespace std;

// BRUTE FORCE APPROACH

// TIME COMPLEXITY --> O(m*n)
bool bruteForce(int matrix[][4], int n, int key){
    for(int i = 0; i<n ; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == key){
                cout << "Using Brute force Approach" << endl;
                cout << "Found at cell (" << i << "," << j << ")" << endl;
                return true;
            }
        }
    }
    cout << "Using Brute force Approach" << endl;
    cout << "!!!! Key Not Found !!!!" << endl;
    return false;

}

// TIME COMPLEXITY --> O(m + n - 1)

// If number of rows >>> columns then time complexity -----> O(n) because number of columns  will be negligible
// If number of columns >>> rows then time complexity -----> O(m) because number of rows  will be negligible

bool stairCaseApproach(int matrix[][4], int n, int m, int key){
    int row = 0 , col = m-1;

    while(row < n && col >= 0){
        if(matrix[row][col] == key){
            cout << "Found at cell (" << row << "," << col << ")" << endl;
            return true;
        }
        else if(matrix[row][col] > key){
            // left
            col--;
        }
        else{
            // down
            row++;
        }
    }
    cout << "!!!! Key Not Found !!!!" << endl;
    return false;

}

int main(){

    int matrix[4][4] = {{10,20,30,40},{15, 25 , 35, 40},{27, 29, 37, 45},{32,33,39,50}};
    int n = 4;
    int m = 4;
    int key ;
    cout << "Enter the target value: ";
    cin >> key;
    cout << endl;


    cout << "The index of the target value is " << bruteForce(matrix,n, key);
    cout << endl;

    // stairCaseApproach(matrix, n,m,key);
    cout << endl;

    return 0;
}
#include<iostream>
using namespace std;

// APPROACH 1
   // Time Complexity --- >O(n2)
int digonalSum(int matrix[][4], int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < n; j++){
            if(i == j){
                total += matrix[i][j];
            }
            else if(j == n-i-1){
                total += matrix[i][j];
            }
        }
    }
    
    return total;
}

// APPROACH 2 
   //  Time Complexity --- > O(n)

int digonalSum2(int matrix[][4], int n){
    int total2 = 0;
    for(int i = 0; i < n; i++){
        total2 += matrix[i][i];
        if(i != n - i -1){
            total2 += matrix[i][n-i-1];
        }
        
    }
    
    return total2;
}

int main(){

    cout << " *********************************************** Diagonal Sum Problem ***********************************************" << endl;

    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = 4;
    

    cout << "Total Sum = " << digonalSum(arr,n);
    cout << endl;
    cout << endl;

    cout << "Total Sum = " << digonalSum2(arr,n);
    cout << endl;


    // Exampple 2

    // int arr2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int n2 = 3;
    // cout << "Total Sum = " << digonalSum(arr2,n2);
    
    



    return 0;
}
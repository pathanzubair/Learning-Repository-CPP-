#include <iostream>
using namespace std;


void printReverseArray(int *nums, int n){
    for(int i = 0; i<n; i++){
        cout << nums[i] << ",";
    }
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    int arr_copy[n];

    cout << "FIRST APPROACH :- BY Using Extra Space " << endl;
    // for(int i = 0; i < n; i++){
    //     int j = n-i-1;
    //     arr_copy[j] = arr[i];

    // }
    // for(int i = 0; i<n; i++){
    //     arr[i] = arr_copy[i];
    // }

    cout << "SECOND APPROACH :- BY Using Two Pointer Approach i.e(without using Extra Space)" << endl;

    int k = 0;
    int l = n-1;
    while(k < l){
        swap(arr[k],arr[l]);

        // int temp = arr[k]; 
        // arr[k] = arr[l];
        // arr[l] = temp;
        k++;
        l--; //n-k-1;
    }
    printReverseArray(arr,n);
    cout << endl;



    return 0;
}
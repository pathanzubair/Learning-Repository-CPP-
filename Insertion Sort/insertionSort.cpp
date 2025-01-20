#include <iostream>
using namespace std;

void takeInput(int *arr, int n){
    for(int i = 0; i< n; i++){
        cin >> arr[i] ;
    }
    cout << endl;
}

void printArray(int *arr , int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
}


void insertionSortAlgorithm(int *arr, int n){
    // This for loop track of current element and travese in forward direction i.e in right side
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int j = i-1;
        // this loop keep track of sorted and traverses in backward direction i.e in left side from (i-1 to 0)
        while(j >= 0 && arr[j] > curr){
            swap(arr[j], arr[j+1]);
            j--;
        }
    }
    printArray(arr,n);

}


int main(){

    cout << "************************************************* INSERTION SORT *************************************************" << endl;
    
    int n ;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Elements of the array: ";
    takeInput(arr,n);

    cout << "The ELements of the array are as follows: ";
    printArray(arr,n);

    cout << "Sorted Array: ";
    insertionSortAlgorithm(arr,n);

    
    
    return 0;
}
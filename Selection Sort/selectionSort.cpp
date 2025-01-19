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

void selectionSortAlgorithm(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    printArray(arr,n);
}

int main(){
    cout << "****************************************** SELECTION SORT ******************************************" << endl;

    int n ;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Elements of the array: ";
    takeInput(arr,n);

    cout << "The ELements of the array are as follows: ";
    printArray(arr,n);

    cout << "The sorted Array is : ";
    selectionSortAlgorithm(arr,n);



    return 0;
}
#include <iostream>
#include <algorithm>
#include <stdint.h>

using namespace std;

void elements(int *arr, int n){
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    cout << endl;
}

void printArray(int *arr, int n){
    cout << "The array elements before sorting are: ";
    for(int i = 0; i<n ; i++){
        cout << arr[i] << ",";
    }
    cout << endl;

}


int main(){
    cout << "****************************************** IN-BUILT SORTING ******************************************" << endl;
    int n;
    cout << "Enter size of the array: " ;
    cin >> n;

    int arr[n] = {0};

    cout << "Enter the elements:  ";
    elements(arr, n);

    printArray(arr, n);
    cout << endl;

    cout << "Sorting a specific part of the array:";
    sort(arr+2, arr+5); // sorting array from index 2 to 5
    printArray(arr, n);
    cout << endl;

    cout << "Asscending Order Sorting: ";
    sort(arr, arr+n);
    printArray(arr, n);
    cout << endl;

    cout << "Descending Order Sorting: ";
    sort(arr, arr+n, greater<int>());
    printArray(arr, n);
    cout << endl;



    // elements(arr, n);
    return 0;

}
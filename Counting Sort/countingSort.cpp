#include <iostream>
#include <stdint.h>

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

void countSort(int *freq,int *arr, int f, int n){

    int minRange = INT16_MAX , maxRange = INT16_MIN;
    // Finding the range of the array
    

    // STEP 1. Counting Frequency of the array
    for(int i = 0; i<n; i++){
        minRange = min(minRange, arr[i]);
        maxRange = max(minRange, arr[i]);
        freq[arr[i]] += 1;
    }
    printArray(freq, f);

    cout << "The Sorted Array is: ";

    // STEP 2. Sorting(Assigning) the elements as per order . Time Complexity - O(range) max - min

    for(int i = minRange, j = 0; i <= maxRange; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArray(arr,n);

}






int main(){

    cout << "******************************************* COUNTING SORT *******************************************" << endl;


    int n ;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    int f = n;
    int freq[f] = {0};
    cout << "Enter the Elements of the array: ";
    takeInput(arr,n);

    cout << "The ELements of the array are as follows: ";
    printArray(arr,n);

    cout << endl;

    cout << "Count of Elements in the original unsorted is :";
    countSort(freq,arr, n, f);

    return 0;
}
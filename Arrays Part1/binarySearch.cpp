#include <iostream>
using namespace std;

int binarySearchAlgorithm(int *nums, int n, int key){
    int start = 0;
    int end = n-1;

    while(start <= end){
        int mid = start + ((end - start)/2);
        if(key == nums[mid]){
            return mid;
        }
        else if(key < nums[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }        
    }
    return -1;
}

int main(){

    cout << "*&*&*&*&*&*&*&*&*&*& ----- Bianry Search ----- *&*&*&*&*&*&*&*&*&*&" << endl;
    int n;
    int key;

    cout << "Enter the size of the array : ";
    cin >> n;
    cout << endl;
    
    int arr321[n]; // = {2,4,6,8,10,12,14,16};
    // n = sizeof(arr321)/sizeof(int);
    for(int i = 0; i<n; i++){
        cout << "Element " << i << " : " ;
        cin >> arr321[i];
    }
    cout << endl;

    cout << "Enter the key  to search : ";
    cin >> key;
    cout << endl;

    cout << "The index of the key is " << binarySearchAlgorithm(arr321, n, key);
    cout << endl;


    return 0;
}
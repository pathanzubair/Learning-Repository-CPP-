#include<iostream>
using namespace std;

int linearSearchAlgorithm(int *nums, int n, int key){
    for(int i = 0;i < n; i++ ){
        if(nums[i] == key){
            return i;
        }
    }
    return -1;
}


int main(){
    cout << "Linear Search" << endl;

    int arr439[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr439)/sizeof(int);
    int key;
    cout << "Enter a key to Search = ";
    cin >> key;
    cout << "The index of "<<key << " is " << linearSearchAlgorithm(arr439,n ,key);
    cout << endl;

    return 0;

}

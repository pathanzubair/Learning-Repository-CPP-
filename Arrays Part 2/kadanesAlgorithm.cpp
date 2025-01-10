#include <iostream>
#include <stdint.h>
using namespace std;

int maxSubArraySumKadaneAlg(int *arr, int n){
    int curr_sum = 0;
    int max_sum = INT16_MIN;

    for(int start = 0; start < n; start++){
        curr_sum += arr[start];
        max_sum = max(max_sum, curr_sum);
        
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }
    return max_sum;
}


int main(){

    cout << "******** Max Subarray Sum ********" << endl; 
    cout << endl;
    cout << "----- KADANE's ALGORITHM -----" << endl;

    cout << endl;
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << endl;

    cout << "Enter the elements :" ;
    int arr[n];
    for(int i = 0 ; i< n; i++){
        cin >> arr[i];
    }
    cout << endl;

    cout << "Elements of the array: " << endl;
    for(int j = 0; j < n; j++){
        cout << arr[j] << ",";
    }
    cout << endl;

    cout << "The sum of all subarrays is: ";
    cout << maxSubArraySumKadaneAlg(arr, n);
    cout << endl;


    return 0;
}
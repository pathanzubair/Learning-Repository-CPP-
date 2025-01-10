#include <iostream>
#include <stdint.h>
using namespace std;

// SLIGHTLY OPTIMIZED CODE . Time Complexity : O(n2)
int maxSubArraySum(int *arr, int n){
    int max_sum = INT16_MIN;

    for(int start = 0; start < n; start++){
        int curr_sum = 0;
        for(int end = start; end < n; end++){
            curr_sum += arr[end];
            max_sum = max(max_sum, curr_sum);
            // cout << "(" << curr_sum << ")" << "," ;
        }

        // cout << endl;
    }
    return max_sum;
}

//  Time Complexity : O(n3)

// int maxSubArraySum(int *arr, int n){
//     int max_sum = INT16_MIN;

//     for(int start = 0; start < n; start++){

//         for(int end = start; end < n; end++){
//             int curr_sum = 0;
            
//             for(int i = start; i <=  end; i++){
//                 curr_sum += arr[i];
//             }
//             // cout << "(" << curr_sum << ")" << "," ;
//             max_sum = max(max_sum, curr_sum);
//         }

//         // cout << endl;
//     }
//     return max_sum;
// }

int main(){
    cout << "******** Max Subarray Sum ********" << endl; 
    cout << endl;
    cout << "1.BRUTE FORCE APPROACH" << endl;

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

    cout << "The sum of all subarrays is :";
    cout << maxSubArraySum(arr, n);
    cout << endl;


    return 0;
}

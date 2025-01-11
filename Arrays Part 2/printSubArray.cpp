#include <iostream>
using namespace std;

void printSubArray(int *arr, int n){
    for(int start = 0; start < n; start++){

        for(int end = start; end < n; end++){
            cout << "(";
            
            for(int i = start; i <= end; i++){
                cout << arr[i] << ",";
            }
            cout << ") ";
            // cout << endl;
            // cout << "(" << start << "," << end << ")" << " ";
        }
        cout << endl;
    }
}

int main(){
    cout << "Print Subarray" << endl;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0;i<n; i++){
        cin >> arr[i];
    }

    cout << endl;
    cout << "The elements are : ";
    for(int i = 0;i<n; i++){
        cout << arr[i] << ",";
    }
    cout << endl;
    printSubArray(arr, n);
    cout << endl;
    return 0;
}

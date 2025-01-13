#include <iostream>
#include <stdint.h>

using namespace std;

void inputHeightArray(int *height, int n){
    for(int i = 0; i < n; i++){
        cin >> height[i];
    }
}
void printHeightArray(int *height, int n ){
    for(int i = 0; i < n; i++){
        cout << height[i] << ",";
    }
}

int MaxHeight(int *height, int n){
    int leftArray[20000];
    int rightArray[20000];
    leftArray[0] = height[0];                //  INT16_MIN;
    rightArray[n-1] = height[n-1];               //    INT16_MIN;

    // cout << leftArray[0] << ",";
    for(int i = 1; i < n; i++){
        leftArray[i] = max(leftArray[i-1], height[i-1]);
        // cout << leftArray[i] << ",";
    }
    // cout << endl;

    // cout << rightArray[n-1] << ",";
    for(int i = n-2; i >= 0; i--){
        rightArray[i] = max(rightArray[i+1], height[i+1]);
        // cout << rightArray[i] << ",";
    }
    // cout << endl;

int totalVolume = 0;
    for(int i = 0; i < n; i++){
        int curr_sum = min(leftArray[i], rightArray[i]) - height[i];
        if(curr_sum > 0){
            totalVolume += curr_sum;
        }    
    }

    return totalVolume;


}




int main(){

    
    cout << endl;
    cout << endl;
    cout << "****************************************************** Trapping Rainwater ******************************************************" ;
    cout << endl;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << endl;

    int height[n];
    cout << "Enter the elements of the array: ";
    inputHeightArray(height, n);
    cout << endl;

    cout << "The array elements are: ";
    printHeightArray(height,n);
    cout << endl;

    
    cout << "The total volume of the rain water is :" << MaxHeight(height,n);
    cout << endl;
    
    // rightMaxHeight(height,n);
    // cout << endl;


    return 0;
}
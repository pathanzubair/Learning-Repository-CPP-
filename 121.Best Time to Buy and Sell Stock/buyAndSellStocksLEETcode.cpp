#include <iostream>
#include <stdint.h>
using namespace std;

void inputArray(int *prices, int n){
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++){
        cin >> prices[i];
    }
}

void printArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ",";

    }
}

int minBuyValue(int *prices, int n){
    int buyArray[100000];
    buyArray[0] = INT16_MAX;
    for(int i = 1; i < n; i++){
        buyArray[i] = min(buyArray[i-1], prices[i-1]);
        // cout << buyArray[i] << ",";  
    }

    int max_profit = 0;
    for(int i =0; i < n; i++){
        int curr_profit = prices[i] - buyArray[i];
        max_profit = max(max_profit, curr_profit);
    }

    return max_profit;
}

int main(){

    cout << endl;

    cout << "***************************************************** Buy and Sell Stocks Problem *****************************************************" << endl;
    int n;
    cout << "Enter size of Prices array: ";
    cin >> n;
    int prices[n];

    inputArray(prices, n);
    cout << endl;


    cout << "Enter Array ELements : ";
    printArray(prices, n);
    cout << endl;

    minBuyValue(prices, n);
    cout << endl;

    cout << "Maximum Profit = " << minBuyValue(prices, n);
    cout << endl;
    
    
    
    return 0;

}
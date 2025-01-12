# 121. Best Time to Buy and Sell Stock

## Description


You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.



 <p>&nbsp;</p>


<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> prices = [7,1,5,3,6,4]
<strong>Output:</strong> 5
<strong>Explanation:</strong> Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> prices = [7,6,4,3,1]
<strong>Output:</strong> 0
<strong>Explanation:</strong> In this case, no transactions are done and the max profit = 0.
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= prices.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= prices[i] &lt;= 10<sup>4</sup></code></li>
</ul>

<p>&nbsp;</p>

<!-- description:end -->

## Solutions

<!-- solution:start -->

The code provides the following functionalities:

* Takes the size of the prices array as input from the user.
* Prompts the user to enter the elements of the prices array.
* Calculates the maximum profit that can be made by buying and selling a stock once.
* Prints the maximum profit to the console.

#### C++

```cpp
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
```

<!-- tabs:end -->

<!-- solution:end -->

<!-- problem:end -->

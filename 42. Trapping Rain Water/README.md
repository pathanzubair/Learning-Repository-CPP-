# 42. Trapping Rain Water

## Description

Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

 <p>&nbsp;</p>


<p><strong class="example">Example 1:</strong></p>
<pre>
<strong>Input:</strong> height = [0,1,0,2,1,0,1,3,2,1,2,1]
<strong>Output:</strong> 6
<strong>Explanation:</strong> The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. 
In this case, 6 units of rain water (blue section) are being trapped.
</pre>

<p><strong class="example">Example 2:</strong></p>
<pre>
<strong>Input:</strong> prices = [4,2,0,3,2,5]
<strong>Output:</strong> 9
</pre>

<p>&nbsp;</p>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>n == height.length </code></li>
  <li><code>1 &lt;= n &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code>0 &lt;= height[i] &lt;= 10<sup>5</sup></code></li>
</ul>

<p>&nbsp;</p>

<!-- description:end -->

## Solutions

<!-- solution:start -->

Purpose:

This C++ code calculates the total volume of rainwater that can be trapped in a given array of integers. It represents a histogram where each integer signifies the height of a bar. The code efficiently determines the amount of water trapped above each bar by considering the heights of its neighboring bars.

```cpp
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
```

<!-- tabs:end -->

<!-- solution:end -->

<!-- problem:end -->

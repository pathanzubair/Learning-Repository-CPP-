# Insertion Sort

## Overview
Insertion Sort is a simple and efficient algorithm for sorting a small number of elements. It works by building the final sorted array one item at a time, with each new element being inserted into its correct position relative to the already-sorted part of the array.

## How It Works
1. Start with the first element, which is considered sorted.
2. Pick the next element and compare it with the elements in the sorted portion.
3. Shift the sorted elements to the right to make space for the current element.
4. Insert the current element into its correct position.
5. Repeat until all elements are sorted.

## Step-by-step execution:

1. Start with the second element (25). Compare it with 64 and insert it before 64:  
   **Array after Step 1:** `[25, 64, 12, 22, 11]`

2. Take the next element (12). Compare it with 64 and 25, then insert it at the correct position:  
   **Array after Step 2:** `[12, 25, 64, 22, 11]`

3. Take the next element (22). Compare it with 64, 25, and 12, then insert it at the correct position:  
   **Array after Step 3:** `[12, 22, 25, 64, 11]`

4. Take the last element (11). Compare it with 64, 25, 22, and 12, then insert it at the correct position:  
   **Array after Step 4:** `[11, 12, 22, 25, 64]`

5. The array is now sorted: `[11, 12, 22, 25, 64]`
   
## Time Complexity
- **Best Case:** O(n) — when the array is already sorted.
- **Worst Case:** O(n²) — when the array is sorted in reverse order.
- **Average Case:** O(n²).

## Space Complexity
- O(1) — Insertion Sort is an in-place sorting algorithm.

## Advantages
- Simple to implement and understand.
- Efficient for small datasets or nearly sorted data.
- Stable sorting algorithm (does not change the relative order of equal elements).
- In-place algorithm, requiring minimal memory.

## Disadvantages
- Inefficient for large datasets due to O(n²) time complexity in the average and worst cases.
- Not suitable for datasets where performance is critical.

### C++

```cpp
#include <iostream>
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


void insertionSortAlgorithm(int *arr, int n){
    // This for loop track of current element and travese in forward direction i.e in right side
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int j = i-1;
        // this loop keep track of sorted and traverses in backward direction i.e in left side from (i-1 to 0)
        while(j >= 0 && arr[j] > curr){
            swap(arr[j], arr[j+1]);
            j--;
        }
        arr[j+1] = curr;
        
    }
    printArray(arr,n);

}


int main(){

    cout << "************************************************* INSERTION SORT *************************************************" << endl;
    
    int n ;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Elements of the array: ";
    takeInput(arr,n);

    cout << "The ELements of the array are as follows: ";
    printArray(arr,n);

    cout << "Sorted Array: ";
    insertionSortAlgorithm(arr,n);

    
    
    return 0;
}


```

<!-- tabs:end -->

<!-- solution:end -->

<!-- problem:end -->

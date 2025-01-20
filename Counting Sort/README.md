# Counting Sort

Counting Sort is a non-comparison-based sorting algorithm that works by counting the frequency of each element in the input array. It is particularly useful when the range of input values is not significantly larger than the number of elements in the array.

## How It Works

1. Determine the range of input values (minimum and maximum).
2. Create a frequency array to store the count of each element.
3. Use the frequency array to calculate the cumulative count, which determines the position of each element in the sorted array.
4. Place the elements into the sorted array based on the cumulative count.
5. Copy the sorted elements back into the original array.

## Example

Given the array: `[1, 4, 1, 3, 2, 4, 3, 7]`

**Step-by-step execution:**

1. Determine the range: minimum = `1`, maximum = `7`.
2. Initialize the frequency array: `[0, 0, 0, 0, 0, 0, 0]` (for values `1` to `7`).
3. Count the occurrences:
   - Frequency array after counting: `[2, 1, 2, 2, 0, 0, 1]`.
4. Calculate the cumulative count:
   - Cumulative frequency array: `[2, 3, 5, 7, 7, 7, 8]`.
5. Place elements into the sorted array:
   - Sorted array: `[1, 1, 2, 3, 3, 4, 4, 7]`.
6. Copy back to the original array:
   - Final sorted array: `[1, 1, 2, 3, 3, 4, 4, 7]`.

## Time Complexity

- **Best Case:** O(n + k)  
- **Average Case:** O(n + k)  
- **Worst Case:** O(n + k)  

Where `n` is the number of elements in the array and `k` is the range of input values.

## Space Complexity

- O(n + k) — Additional space is required for the frequency and cumulative count arrays.

## Advantages
- Efficient for sorting integers or objects with integer keys.
- Performs well when the range of input values is small relative to the array size.
- Stable sorting algorithm.

## Disadvantages
- Not suitable for sorting datasets with large ranges of input values.
- Requires additional memory for the frequency and cumulative count arrays.

#### C++

```cpp
#include <iostream>
#include <stdint.h>

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

void countSort(int *freq,int *arr, int f, int n){

    int minRange = INT16_MAX , maxRange = INT16_MIN;
    // Finding the range of the array
    

    // STEP 1. Counting Frequency of the array
    for(int i = 0; i<n; i++){
        minRange = min(minRange, arr[i]);
        maxRange = max(minRange, arr[i]);
        freq[arr[i]] += 1;
    }
    printArray(freq, f);

    cout << "The Sorted Array is: ";

    // STEP 2. Sorting(Assigning) the elements as per order . Time Complexity - O(range) max - min

    for(int i = minRange, j = 0; i <= maxRange; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    printArray(arr,n);
}
int main(){

    cout << "******************************************* COUNTING SORT *******************************************" << endl;


    int n ;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    int f = n;
    int freq[f] = {0};
    cout << "Enter the Elements of the array: ";
    takeInput(arr,n);

    cout << "The ELements of the array are as follows: ";
    printArray(arr,n);

    cout << endl;

    cout << "Count of Elements in the original unsorted is :";
    countSort(freq,arr, n, f);

    return 0;
}

```

<!-- tabs:end -->

<!-- solution:end -->

<!-- problem:end -->

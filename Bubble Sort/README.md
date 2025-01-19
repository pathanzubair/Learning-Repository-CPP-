# BUBBLE SORT ALGORITHM

## Explanation

The bubble sort algorithm works by repeatedly comparing adjacent elements of the list and swapping them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.

* The outer loop (`for (i = 0; i < n-1; i++)`) iterates through the list n-1 times. In each iteration, the maximum element will be bubbled to the end of the sub-list.
* The inner loop (`for (j = 0; j < n-i-1; j++)`) compares adjacent elements and swaps them if they are in the wrong order.
* The `swap` function exchanges the values of two elements.

## Complexity

* Time complexity:
    * Best case: O(n) - This occurs when the list is already sorted.
    * Average case: O(n<sup>2</sup>) - This is the typical case where the list is randomly ordered.
    * Worst case: O(n<sup>2</sup>) - This occurs when the list is in reverse order.
* Space complexity: O(1) - Bubble sort only uses a constant amount of additional space.

### Advantages

* Simple to understand and implement.
* Efficient for small lists.

### Disadvantages

* Inefficient for large lists due to its O(n^2) time complexity.
* There are more efficient sorting algorithms available, such as merge sort and quicksort.

## Example

#### C++

```cpp

#include <iostream>
using namespace std;

void takeInput(int *arr, int n){
    cout << "Enter the array elementss: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void printArray(int *arr, int n){
    cout << "The array elements are: ";
    for(int i = 0; i< n; i++){
        cout << arr[i] << ",";
    }
}
void bubbleSortAlgorithm(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}



int main(){
    cout << "******************************************* BUBBLE SORT *******************************************" << endl;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << endl;
    
    int arr[n];
    takeInput(arr,n);
    cout << endl;
    printArray(arr, n);
    cout << endl;
    bubbleSortAlgorithm(arr, n);
    cout << endl;
    printArray(arr,n);
    cout << endl;


    return 0;
}

```

<!-- tabs:end -->

<!-- solution:end -->

<!-- problem:end -->

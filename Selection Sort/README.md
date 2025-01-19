# Selection Sort

Selection Sort is a simple and intuitive sorting algorithm. It works by dividing the array into two parts: a sorted subarray and an unsorted subarray. The algorithm repeatedly selects the smallest (or largest) element from the unsorted subarray and moves it to the end of the sorted subarray.

## How It Works

1. Start with the first element of the array.
2. Find the smallest element in the unsorted portion of the array.
3. Swap the smallest element with the first element of the unsorted portion.
4. Repeat steps 2-3 for the remaining unsorted portion of the array until the entire array is sorted.

### Example

Given the array: `[64, 25, 12, 22, 11]`

**Step-by-step execution:**

1. Find the smallest element in `[64, 25, 12, 22, 11]` → `11`
   Swap `11` with `64`: `[11, 25, 12, 22, 64]`

2. Find the smallest element in `[25, 12, 22, 64]` → `12`
   Swap `12` with `25`: `[11, 12, 25, 22, 64]`

3. Find the smallest element in `[25, 22, 64]` → `22`
   Swap `22` with `25`: `[11, 12, 22, 25, 64]`

4. Find the smallest element in `[25, 64]` → `25`
   No swap needed: `[11, 12, 22, 25, 64]`

5. Array is now sorted: `[11, 12, 22, 25, 64]`

## Time Complexity

- **Best Case:** O(n²)
- **Average Case:** O(n²)
- **Worst Case:** O(n²)

## Space Complexity

- **Auxiliary Space:** O(1) (in-place sorting)


## Advantages
Simple to understand and implement.
Does not require additional memory (in-place sorting).

## Disadvantages
Inefficient on large datasets.
Has a time complexity of O(n²), making it slower than more advanced algorithms like Quick Sort or Merge Sort.

#### C++

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

void selectionSortAlgorithm(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    printArray(arr,n);
}

int main(){
    cout << "****************************************** SELECTION SORT ******************************************" << endl;

    int n ;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the Elements of the array: ";
    takeInput(arr,n);

    cout << "The ELements of the array are as follows: ";
    printArray(arr,n);

    cout << "The sorted Array is : ";
    selectionSortAlgorithm(arr,n);



    return 0;
}


```

<!-- tabs:end -->

<!-- solution:end -->

<!-- problem:end -->

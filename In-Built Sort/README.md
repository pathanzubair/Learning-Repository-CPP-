# In-Built Sorting Function::sort (C++)
## sort(start, end) --> To sort in Ascending order
## sort(start, end, greater<int>()) --> To sort in Decending order

The `std::sort` function in C++ is an inbuilt function provided in the `<algorithm>` library. It is a highly optimized sorting function that uses a hybrid of Quick Sort, Heap Sort, and Insertion Sort, known as Introsort, to achieve optimal performance.

## How It Works

1. **Quick Sort Phase:** Initially, the array is partitioned using the Quick Sort approach for speed.
2. **Heap Sort Phase:** If the recursion depth exceeds a certain limit, it switches to Heap Sort to ensure O(n log n) performance.
3. **Insertion Sort Phase:** For small subarrays, it uses Insertion Sort for efficiency.

## Example

Given the array: `[7, 2, 5, 3, 8, 1, 6]`

**Step-by-step execution:**

1. Start with the array: `[7, 2, 5, 3, 8, 1, 6]`.
2. The function partitions and sorts the array using Introsort.
3. Final sorted array: `[1, 2, 3, 5, 6, 7, 8]`.

## Time Complexity

- **Best Case:** O(n log n)
- **Average Case:** O(n log n)
- **Worst Case:** O(n log n)

## Space Complexity

- O(log n) — Uses stack space for recursion.

## Advantages
- Highly optimized and faster than manually implemented sorting algorithms.
- Easy to use and supports custom comparators for flexibility.
- Works for any data type that supports comparison operators.

## Disadvantages
- Not stable (relative order of equal elements may not be preserved).
- Additional stack space is required for recursion.

#### C++ Example

```cpp
#include <iostream>
#include <algorithm>
#include <stdint.h>

using namespace std;

void elements(int *arr, int n){
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    cout << endl;
}

void printArray(int *arr, int n){
    cout << "The array elements before sorting are: ";
    for(int i = 0; i<n ; i++){
        cout << arr[i] << ",";
    }
    cout << endl;

}


int main(){
    cout << "****************************************** IN-BUILT SORTING ******************************************" << endl;
    int n;
    cout << "Enter size of the array: " ;
    cin >> n;

    int arr[n] = {0};

    cout << "Enter the elements:  ";
    elements(arr, n);

    printArray(arr, n);
    cout << endl;

    cout << "Sorting a specific part of the array:";
    sort(arr+2, arr+5); // sorting array from index 2 to 5
    printArray(arr, n);
    cout << endl;

    cout << "Asscending Order Sorting: ";
    sort(arr, arr+n);
    printArray(arr, n);
    cout << endl;

    cout << "Descending Order Sorting: ";
    sort(arr, arr+n, greater<int>());
    printArray(arr, n);
    cout << endl;



    // elements(arr, n);
    return 0;

}

```

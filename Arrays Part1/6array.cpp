#include <iostream>
using namespace std;

void fun344(int arr[]){
    arr[0] = 4444;
}

void fun349(int *ptr){
    ptr[0] = 3000;
}

void printArray(int nums[], int n1){       // Her the function cannot calculate the size of the because the array is paassed as a pointer , So along with array we need to pass the size of the array itself in the function definition.

    for(int i = 0; i<n1; i++){
        cout << nums[i] << ",";
    }
    cout << endl;
    cout << "Address size of the array pointer = "<< sizeof(nums) << endl;  // 8 
}
int main(){
    cout <<  "ARRAY DATASTRUCTURE" << endl;

// 1.Declare Array
    int arr1[12]; // garbage values
    cout << "Size of array 1: " << sizeof(arr1) << endl; 
    cout << "Length of the array: " << sizeof(arr1)/sizeof(int) << endl;
    //  If no value is present in the array then all the array blocks are initialised as garbage values
    // arr1[0] = 4313;
    // arr1[1] = 564513;
    // arr1[3] = 3;
    // arr1[4] = 13;
    // arr1[5] = 313;

    // first array

    cout << arr1[0] << endl;
    cout << arr1[1] << endl;
    cout << arr1[2] << endl;
    cout << arr1[3] << endl;
    cout << arr1[4] << endl;
    cout << arr1[5] << endl;
    
    cout << endl;
    // second array
    int arr2[13] = {1,2,3}; // Rest values initialised to zero
    cout << "Size of array 2: " << sizeof(arr2) << endl; 
    cout << "Length of the array: " << sizeof(arr2)/sizeof(int) << endl;
    // If some elements are stored in the array and if we try to acces the index where value is not stored then it is initialisesd to zero(0)
    cout << arr2[0] << endl;
    cout << arr2[0] << endl;
    cout << arr2[1] << endl;
    cout << arr2[2] << endl;
    cout << arr2[3] << endl;


    cout << endl;
    cout << "Elements of Array 3" << endl;
    int arr3[] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Size of array 3: " << sizeof(arr3) << endl; 
    cout << "Length of the array: " << sizeof(arr3)/sizeof(int) << endl;
    cout << arr3[0] << endl;
    cout << arr3[1] << endl;
    cout << arr3[2] << endl;
    cout << arr3[3] << endl;
    cout << arr3[4] << endl;
    cout << arr3[5] << endl;
    // Here I'll try to acesss the element beyond the size of the array . As the array has 10 elements , we try to acces the 11th element and lets see what happens
    cout << arr3[10] << endl;
    cout << arr3[12] << endl;

    cout << endl;
    cout << "Memory is statically Allocated i.e At compile time" << endl;

    cout << "***************************** INPUT and OUTPUT in an ARRAY **********************"<< endl;
    int marks[5];
    cout << "Taking input" << endl;
    int n = sizeof(marks)/sizeof(int);
    for(int i = 0; i<n; i++){
        cin >> marks[i];
    }
    cout << endl;

    cout << "Display the Array" << endl;
    for(int i = 0; i < n; i++){
        cout << "Student " << i << " = "<< marks[i] << endl;
    }

    cout << "**************************** Dynamically Allocating Array ***********************" << endl;
    int len;
    cout << "Enter size of the array : ";
    cin >> len;
    int dynamic_array[len];
    for(int i = 0; i<len; i++){
        cout << "Enter value " << i << " : ";
        cin >> dynamic_array[i]; 
    }
    cout << endl;
    cout << "Displaying the array" << endl;
    for(int i = 0; i < len ; i++){
        cout << dynamic_array[i] << ",";
    }


    cout << endl;
    cout << "******************* Find largest in an array *******************" << endl;
    int length;
    cout << "Enter the size of array: " << endl;
    cin >> length;
    int arr4[length];
    
    for(int i = 0; i<length; i++){
        cin >> arr4[i];
    }
    cout << "Dispalying the array list" << endl;
    for(int i = 0; i<length; i++){
        cout << arr4[i] <<",";
    }

    int max = arr3[0];
    for(int i = 1; i < length; i++){
        if(max < arr4[i]){
            max = arr4[i];
        }
    }
    cout << endl;
    cout << "The largest element is " << max << endl;


    cout << "**************** Arrays are passed as reference *******************" << endl;
    int a = 4;
    int *ptr = &a;
    cout << "Pointer address of a = " << ptr << endl; // 0x..

    int arr327[5] = {2,4,6,8,10};
    cout << "Address of the array starting element : " << arr327 << endl;   // Here address of the array  is printed . Also array name act as a pointer that points to its address.(i.e . Array name points to 0th index of the array.)
    cout << endl;
    cout << "Dereferencing the array i.e accessing the element" << endl;
    // int ptr2 = arr327;
    cout << "First element of the array = " << *arr327 << endl; // 2
    cout << "Second element of the array = " << *(arr327+1) << endl;  // 4
    cout << "Second element of the array = " << *arr327+1 << endl;      // 2+1 = 3


    cout << endl;
    cout << "NOTE :- Arrays are passed as reference means original array is passed and any changes made reflect in the original array and not in the copy of te array. " << endl;
    // following example reflect the same thing
    fun344(arr327);
    cout << "Changed element in the araray from  2 to "<< arr327[0] << endl; // 4444

    fun349(arr327);
    cout << "Changed element in the araray from  4444 to "<< arr327[0] << endl; // 3000

    cout << "Printing array through functions does not provide the desir dresult instead it gives the error "<< endl;
    int n1 = sizeof(arr327)/sizeof(int);
    cout << "Elements of the arr327 = " ;
    printArray(arr327,n1);  // ERROR  // As we are now paasing the size of the array the program will print the elements of the array .
    cout << endl;
    cout << "Size of array327 = " << sizeof(arr327) << endl; //20
    return 0;
}
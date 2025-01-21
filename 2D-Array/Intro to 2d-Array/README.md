``` cpp

#include <iostream>
using namespace std;

int main(){

    cout << "********************************** 2-D Arrays **********************************" << endl;

    int arr[3][3] = {{100,100,100},
                    {85, 74, 89},
                    {63, 72, 65}};

    cout << arr[0][1] << endl;
    cout << arr[0][1] << endl;
    cout << arr[0][2] << endl;



    int arr2[3][4];

    cout << "Enter the elements in the 2D array: "<< endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr2[i][j];
        }
    }
    cout << "The elements i the 2-D array:  "<< endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr2[i][j] << ",";
        }
        cout << endl;
    }


    return 0;
}

```

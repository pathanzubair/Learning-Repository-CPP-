#include <iostream>
using namespace std;

void spiralMatrix(int matrix[][4], int n, int m)
{
    int srow = 0, erow = n - 1;
    int scol = 0, ecol = m - 1;
    
    while(srow <= erow && scol <= ecol)
    {

        // top

        for (int i = scol; i <= ecol; i++)
        {
            cout << matrix[srow][i] << ",";
        }

        // right
        for (int j = srow + 1; j <= erow; j++)
        {
            cout << matrix[j][ecol] << ",";
        }

        // bottom
        for (int k = ecol - 1; k >= scol; k--)
        {
            if(srow == erow){   // Corner case to avoid print same element twice in [3][4] array
                break;
            }
            cout << matrix[erow][k] << ",";
        }

        // left

        for (int l = erow - 1; l >= srow + 1; l--)
        {
            if(scol == ecol){    // Corner case to avoid print same element twice in [3][4] array
                break;
            }
            cout << matrix[l][scol] << ",";
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }
}

int main()
{
    cout << " ********************************************************** Spiral matrix Problem ********************************************************** " << endl;

    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    int n = 4;
    int m = 4;

    spiralMatrix(arr, n, m);
    cout << endl;

    int arr2[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                    };
                    //  {13, 14, 15, 16}
    spiralMatrix(arr2, 3, 4);
    cout << endl;
    return 0;
}
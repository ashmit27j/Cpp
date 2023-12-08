/*
A square matrix is said to be symmetric matrix if the transpose of the matrix is same as the given matrix. 
Symmetric matrix can be obtain by changing row to column and column to row.
a[i][j] == a[j][i] for all elements
example:
1 2 3
2 8 4
3 4 9 
A = At
*/
#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter row x column\n";
    cin >> m >> n;
    int arr1[m][n];
    cout << "Enter array 1\n";
    for (int i = 0; i < m; i ++ )
    {
        for (int j = 0; j < m; j ++ )
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < m; i ++ )
    {
        for (int j = 0; j < m; j ++ )
        {
            if (arr1[i][j] != arr1[j][i])
            {
                cout << "Not symmetrical matrix!";
                return 0;
            }
        }
    }
    cout << "Is a symmetrical matrix!";
}
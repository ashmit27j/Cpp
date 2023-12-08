/*
Given a square matrix and the task is to check the matrix is in lower triangular form or not. 
A square matrix is called lower triangular if all the entries above the main diagonal are zero. 
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
        for (int j = m - 1; j > i; j -- )
        {
            if (arr1[i][j] != 0)
            {
                cout << "Not lower traingular matrix!";
                return 0;
            }
        }
    }
    cout << "Is a lower traingular matrix!";
}
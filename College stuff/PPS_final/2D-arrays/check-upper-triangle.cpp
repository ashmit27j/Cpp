/*
Given a square matrix and the task is to check the matrix is in upper triangular form or not. 
A square matrix is called upper triangular if all the entries below the main diagonal are zero.
if all lower triangle elements are zero then its a upper triangle matrix
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
        for (int j = 0; j < i; j ++ )
        {
            if (arr1[i][j] != 0)
            {
                cout << "Not upper traingular matrix!";
                return 0;
            }
        }
    }
    cout << "Is a upper traingular matrix!";
}
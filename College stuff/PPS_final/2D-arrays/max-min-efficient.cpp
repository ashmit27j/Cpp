/*
max min in a 2-d array using a more efficient method
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
    int min = arr1[0][0], max = arr1[0][0];
    for (int i = 0; i < m; i ++ )
    {
        for (int j = 0; j < n/2; j ++ )
        {
            if ( arr1[i][j] > arr1[i][n-1-j] )
            {
                if ( min > arr1[i][n-1-j])
                    min = arr1[i][n-1-j];
                if ( max < arr1[i][j] )
                    max = arr1[i][j];
            }
            else //when arr1[i][j] is < arr[i][n-1-j]
            {
                if ( min > arr1[i][j] )
                    min = arr1[i][j];
                if ( max < arr1[i][n-1-j] )
                    max = arr1[i][n-1-j];
            }
        }
    }
    cout << "maximum = " << max << endl;
    cout << "minimum = " << min;
}
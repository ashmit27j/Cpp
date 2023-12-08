//freq of even and odd in given 2-d Matrix
#include<iostream>
using namespace std;
int main()
{
    int m, n, odd = 0, even = 0;
    cout << "Enter row x column\n";
    cin >> m >> n;
    int arr1[m][n];
    cout << "Enter array 1\n";
    for (int i = 0; i < m; i ++ )
    {
        for (int j = 0; j < m; j ++ )
        {
            cin >> arr1[i][j];
            if ( arr1[i][j] % 2 == 0 )
                ++even;
            else
                ++odd;
        }
    }
    cout << "Frequency of odd numbers in given matrix: " << odd << endl;
    cout << "Frequency of even numbers in given matrix: " << even;
}
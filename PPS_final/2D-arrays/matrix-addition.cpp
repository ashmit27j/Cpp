//add two matrices inputted by user
#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter row x column";
    cin >> m >> n;
    int arr1[m][n];
    int arr2[m][n];
    cout << "Enter array 1";
    for (int i = 0; i < m; i ++ )
    {
        for (int j = 0; j < m; j ++ )
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter array 2";
    for (int i = 0; i < m; i ++ )
    {
        for (int j = 0; j < m; j ++ )
        {
            cin >> arr2[i][j];
        }
        cout << endl;
    }
    cout << "sum of arrays given: \n";
    for (int i = 0; i < m; i ++ )
    {
        for (int j = 0; j < m; j ++ )
        {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
    
}
#include<iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    cout << "Enter row x column for arr1\n";
    cin >> r1 >> c1;
    cout << "Enter row x column for arr2\n";
    cin >> r2 >> c2;
    int arr1[r1][c1];
    int arr2[r2][c2];
    cout << "Enter array 1\n";
    for (int i = 0; i < r1; i ++ )
    {
        for (int j = 0; j < c1; j ++ )
        {
            cin >> arr1[i][j];
        }
    }
    cout << "Enter array 2\n";
    for (int i = 0; i < r2; i ++ )
    {
        for (int j = 0; j < c2; j ++ )
        {
            cin >> arr2[i][j];
        }
    }
    int mult[r1][c2];
    //row of the first guy and col of the second array
    if (c1 == r2 )
    {
        
        for (int i = 0; i < r1; i ++ )
        {
            for (int j = 0; j < c2; j ++ )
            {
                mult[i][j] = 0;
                for (int k = 0; k < c1; k++ )
                {
                    mult[i][j] += ( arr1[i][k] * arr2[k][j] );
                }
            }
        }
    }
    else
    {
        cout << "Invalid matrices!";
        return 0;
    }
    for (int i = 0; i < r1; i ++ )
    {
        for (int j = 0; j < c2; j ++ )
        {
           cout << mult[i][j] << " ";
        }
        cout << endl;
    }
}
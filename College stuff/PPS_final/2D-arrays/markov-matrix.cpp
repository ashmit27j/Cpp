//markov matrix problem
/*The matrix in which the sum of each row is equal to 1.*/
//PSEUDO CODE:
/*
1. input row and columns from user
2. create an array of dimensions m x n entered
3. input array from user
4. iterate through the array and find sum of each row
5. if at any point sum!=1 print not markov and return 0
6. if the loop ends with no failures print that it is a markov matrix*/
#include<iostream>
using namespace std;
int main()
{
    int m, n, sum;
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
        sum = 0;
        for (int j = 0; j < m; j ++ )
        {
            sum += arr1[i][j];
        }
        if ( sum != 1)
        {
            cout << "Not a Markov matrix!";
            return 0;
        }
    }
    cout << "It is a Markov Matrix!";
    
}
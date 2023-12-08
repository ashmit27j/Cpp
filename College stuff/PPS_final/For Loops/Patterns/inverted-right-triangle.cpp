/*
5 4 3 2 1 
5 4 3 2 
5 4 3 
5 4 
5 
*/
#include<iostream>
using namespace std;
int main()
{
    int i, j, spaces;
    for ( i = 1 ; i <= 5; i ++ )
    {
        for ( j = 5 ; j >= i ; j -- )
        {
            cout << j << " ";
        }   
        cout << endl;
    }
}
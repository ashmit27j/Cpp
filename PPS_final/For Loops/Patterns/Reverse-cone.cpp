/*
1 2 3 4 5 
 2 3 4 5 
  3 4 5 
   4 5 
    5 
    */
#include<iostream>
using namespace std;
int main()
{
    int i, j, spaces;
    for ( i = 1 ; i <= 5; i ++ )
    {
        for ( spaces = 1 ; spaces < i; spaces ++ )
        {   
            cout << " ";
        }   
        for ( j = i ; j <= 5 ; j ++ )
        {
            cout << j << " ";
        }   
        cout << endl;
    }
}
/*
when n = 5
pattern:
    *
   **
  ***
 ****
*****

*/
#include<iostream>
using namespace std;
int main()
{
    int i, j, spaces, n;
    cin >> n;
    for( i = 1; i <= n; i++ ) 
    {
        for ( spaces = n - 1; spaces >= i; spaces-- )
        {
            cout << " ";
        }
        for ( j = 1; j <= i; j++ )
        {
            cout << "*";
        }
        cout << endl;
    }
}
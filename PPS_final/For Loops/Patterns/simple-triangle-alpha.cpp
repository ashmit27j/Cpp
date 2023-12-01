/*
A 
B C 
D E F 
G H I J 
K L M N O */
#include<iostream>
using namespace std;
int main()
{
    int i, j, k = 65;
    for( i = 0; i < 6; i++ ) 
    {
        for ( j = 0; j < i; j++ )
        {
            cout << (char)k << " ";
            ++k;
        }
        cout << endl;
    }
}
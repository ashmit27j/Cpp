#include<iostream>
using namespace std;
int sum ( int num )
{
    if ( num == 0 )
        return num;
    else
        return num + sum (num - 1);
}
int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;
    cout << "sum of all numbers uptil num is: " << sum ( num );
}
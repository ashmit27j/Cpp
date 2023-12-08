#include<iostream>
using namespace std;
int fact( int num )
{
    if( num == 0 || num == 1)
        return num;
    else
        return num * fact( num - 1 );
}
int main()
{
    int num;
    cout << "Enter num: \n";
    cin >> num;
    cout << fact(num);
}
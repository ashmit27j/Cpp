#include<iostream>
using namespace std;
int fib (int num)
{
    if ( num <= 1 )
        return num;
    else
        return fib(num - 1) + fib(num - 2);
}
int main()
{
    int num;
    cout << "Enter range ";
    cin >> num;
    for (int i = 0 ; i < num; i ++ )
    {
        cout << fib(i) << ", ";
    }
}
// Program to find sum of following series using function (Recursive function call) 
//1!+2!+3!+4!+5!+……+N! 
#include<iostream>
using namespace std;
int fact(int num)
{
    if(num == 0 || num == 1)
        return num;
    else
        return num * fact(num - 1);
}
int sum(int num)
{
    if(num == 1 || num == 0)
        return num;
    else
        return fact(num) + sum(num - 1);
}
int main()
{   
    int n;
    cin >> n;
    cout << sum(n);
}

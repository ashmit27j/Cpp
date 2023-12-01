#include<iostream>
using namespace std;
inline float sum ( int num1, int num2)
{
    return num1+num2;
}
int main()
{
    int num1, num2;
    cin >> num1 >>num2;
    cout << "sum = " << sum(num1, num2);
}
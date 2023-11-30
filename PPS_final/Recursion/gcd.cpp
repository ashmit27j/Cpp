#include<iostream>
using namespace std;
int gcd (int n1, int n2, int a)
{
    if ( n1 % a == 0 && n2 % a == 0 )
        return a;
    else
        return gcd ( n1, n2, a-1);
}
int main()
{
    int num1, num2, ans;
    cout << "Enter num 1: ";
    cin >> num1;
    cout << "Enter num 2: ";
    cin >> num2;
    if (num1 > num2)
        ans = num1;
    else
        ans = num2;

    cout << "gcd of " << num1 << " and " << num2 << " is: " << gcd(num1, num2, ans);
}
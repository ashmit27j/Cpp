#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << "alpha";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "numeric";
    }
    else
    {
        cout << "special";
    }
}

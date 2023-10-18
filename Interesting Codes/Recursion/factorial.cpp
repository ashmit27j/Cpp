#include <iostream>
#include <stdlib.h>
using namespace std;
int fact(int num)
{
    if (num == 0 || num == 1)
        return num;
    if (num < 0)
    {
        cout << "INVALID";
        exit(0);
    }
    else
        return num * fact(num - 1);
}
int main()
{
    cout << fact(-5);
}
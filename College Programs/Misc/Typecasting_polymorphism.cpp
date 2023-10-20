#include <iostream>
using namespace std;
void func(int a)
{
    cout << "ans: " << a;
}
void func(double a)
{
    cout << "ans: " << a;
}
int main()
{
    func((double)5.0);
}
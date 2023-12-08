#include<iostream>
using namespace std;
void func ( int *ptr )
{
    ++*ptr;
}
int main()
{
    int num1 = 10;
    cout << "num1 original:" << num1 << endl;
    func(&num1);
    cout << "num1 new:" << num1 << endl;
}
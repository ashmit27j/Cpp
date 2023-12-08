#include<iostream>
using namespace std;
void func ( int number )
{
    number++;
    cout << "in func: " << number << endl;
}
int main()
{   
    int num1 = 5;
    cout << "original: " << num1 << endl;
    func(num1);
    cout << "no changes: " << num1;
}
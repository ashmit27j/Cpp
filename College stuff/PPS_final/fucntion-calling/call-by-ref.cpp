#include<iostream>
using namespace std;
//WHEN BOTH REFER TO THE SAME ADDRESS
void func ( int &number )
{
    number++;
}
int main()
{   
    int num1 = 5;
    cout << "original: " << num1 << endl;
    func(num1);
    cout << "new: " << num1;
}
//here NUMBER and num1 refer to the same address
//this is an example of call by referece
#include<iostream>
using namespace std;
int sum(int num1, int num2)
{
    return num1+num2;
}
float sum(float num1, float num2)
{
    return num1+num2;
}
double sum(double num1, double num2)
{
    return num1+num2;
}
int main()
{
    double d1 = 9.0090, d2 = 1.03232;
    float f1 = 9.001, f2 = 1.09;
    cout << sum(100,200)<<endl;
    cout << sum(d1,d2)<<endl;
    cout << sum(f1,f2)<<endl;
}
/*
Define class Complex with real and imaginary as data members, 
define default and parameterized constructor to initialize two complex numbers. 
Define add (Complex, Complex) member function to add two complex numbers and show( ) 
function to display both the complex numbers with their addition.   
*/
#include<iostream>
#include<string>
using namespace std;
class Complex
{
private:
    float real, imaginary;
public:
    Complex()
    {
        real = 0.0;
        imaginary = 0.0;
    }
    Complex(float r, float i)
    {
        real = r;
        imaginary = i;
    }
    Complex add(Complex, Complex);
    void show();
};
Complex Complex::add(Complex c1, Complex c2)
{
    Complex answer;
    answer.real = c1.real + c2.real;
    answer.imaginary = c1.imaginary + c2.imaginary;
    return answer;
}
void Complex::show()
{
    cout << "\nreal: " << real; 
    cout << "\nimaginary: " << imaginary; 
}
int main()
[
    Complex c1(100.23, 200.23);
    Complex c2(300.32, 400.32);
    Complex c3 = add(c1+c2);
]

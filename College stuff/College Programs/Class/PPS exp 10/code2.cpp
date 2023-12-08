/*
Define class Complex with real and imaginary as data members, define default and parameterized constructor to initialize two complex numbers. Define add (Complex, Complex) member function to add two complex numbers and show( ) function to display both the complex numbers with their addition.
*/
#include <iostream>
using namespace std;
class Complex
{
private:
    double real;
    double imaginary;
    double sum;

public:
    Complex(double r, double i)
    {
        real = r;
        imaginary = i;
        sum = 0;
    }
    Complex()
    {
        real = 0;
        imaginary = 0;
        sum = 0;
    }
    void add(Complex &c1, Complex &c2)
    {
        sum = c1.real + c1.imaginary + c2.real + c2.imaginary;
    }
    void display()
    {
        cout << sum;
    }
};
int main()
{
    double r1, r2, i1, i2;
    cout << "Enter the data for Complex number 1: ";
    cin >> r1 >> i1;
    Complex c1(r1, i1);

    cout << "Enter the data for Complex number 1: ";
    cin >> r2 >> i2;
    Complex c2(r2, i2);

    Complex c3;
    c3.add(c1, c2);
    c3.display();
}
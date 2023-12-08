/*
Rewrite above question to add two complex numbers using overloaded + operator.
C036
Bevin Johnson
*/
#include <iostream>
using namespace std;



int main()
{
    double real1, imaginary1;
    double real2, imaginary2;

    cout << "Enter real part of the first complex number: " << endl;
    cin >> real1;
    cout << "Enter imaginary part of the first complex number: " << endl;
    cin >> imaginary1;

    Complex c1(real1, imaginary1);

    cout << "Enter real part of the second complex number: " << endl;
    cin >> real2;
    cout << "Enter imaginary part of the second complex number: " << endl;
    cin >> imaginary2;

    Complex c2(real2, imaginary2);

    Complex c3 = c1 + c2;

    cout << "Sum of the two complex numbers:" << endl;
    c3.show();

    return 0;
}


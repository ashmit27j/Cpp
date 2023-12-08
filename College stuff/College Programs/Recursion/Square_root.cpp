#include <iostream>
using namespace std;
float root(float num, float temp)
{
    if (temp * temp >= num)
        return temp;
    return root(num, temp += 0.01);
}
int main()
{
    float a;
    cout << "Enter a number : ";
    cin >> a;
    cout << "Root of number = " << root(a, 0.01) << endl;
}
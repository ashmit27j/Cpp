//macros are preprocessor directives,
//are of circle using macros
#include <iostream>
using namespace std;
#define PI 3.14
#define area(r) (PI*r*r)
int main()
{
    float r;
    cin >> r;
    cout << "area: " << area(r);
}
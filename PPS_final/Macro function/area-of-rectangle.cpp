#include<iostream>
#define area_of_rect(l, b) (l*b)
using namespace std;
int main()
{
    int l, b;
    cin >> l >> b;
    cout << "area: " << area_of_rect(l,b);
}
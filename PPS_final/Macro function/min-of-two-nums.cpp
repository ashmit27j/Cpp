#include<iostream>
using namespace std;
#define min(n1, n2) ((n1<n2)?n1:n2)
int main()
{
    float n1, n2;
    cin >> n1 >> n2;
    cout << min(n1, n2);
}
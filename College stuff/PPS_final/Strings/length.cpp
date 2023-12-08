#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    string str;
    getline(cin, str);
    for ( i = 0; str[i]!='\0'; i++){}
    cout << "\nlength: " << i;
}
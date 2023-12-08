#include<iostream>
#include<string>
using namespace std;
int main()
{
    int len;
    string str, rev = "";
    getline(cin, str);
    for ( len = 0; str[len]!='\0'; len++){}
    for (int i = len - 1; i >= 0; i-- )
    {
        rev+=str[i];
    }
    for (int i = 0; rev[i]!='\0'; i++)
    {
        cout << rev[i];
    }
}
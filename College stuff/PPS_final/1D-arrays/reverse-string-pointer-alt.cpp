#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str, cpy = "";
    getline(cin, str);
    char *ptr = &str[0];
    while(*ptr!='\0')
    {
        cpy = *ptr + cpy;
        ++ptr;
    }
    char *ptr2 = &cpy[0];
    while(*ptr2!='\0')
    {
        cout << *ptr2;
        ++ptr2;
    }

}
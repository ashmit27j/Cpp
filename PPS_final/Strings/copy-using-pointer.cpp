#include<iostream>
#include<string>
using namespace std;
void cpy(char *p1)
{
    string str2 = "";
    while(*p1!='\0')
    {
        str2 += *p1;
        ++p1;
    }
    char *p2 = &str2[0];
    while(*p2!='\0')
    {
        cout << *p2;
        ++p2;
    }
}
int main()
{
    string s;
    getline(cin, s);
    cpy(&s[0]);
}
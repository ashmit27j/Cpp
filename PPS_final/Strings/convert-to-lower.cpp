#include<iostream>
#include<string>
using namespace std;
int main()
{
    int len;
    string str, str2 = "";
    getline(cin, str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='A' && str[i]<='Z')
            str2 += (str[i]+32);
        else
            str2 += str[i];
    }
    for (int i = 0; str[i]!='\0'; i++)
    {
        cout << str2[i];
    }
}
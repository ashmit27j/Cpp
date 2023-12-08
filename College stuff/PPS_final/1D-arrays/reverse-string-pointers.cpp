#include<iostream>
#include<string>
using namespace std;
int length(string s)
{
    int i;
    for(i = 0; s[i]!='\0'; i++){}
    return i;
}
int main()
{
    string str, cpy = "";
    getline(cin, str);
    //length of string 
    int len = length(str);
    //holds the last character of given string
    char *ptr = &str[len-1];
    //runs until the pointer points to null
    while(*ptr!='\0')
    {
        cpy += *ptr;
        --ptr;
    }
    char *ptr2 = &cpy[0];
    while(*ptr2!='\0')
    {
        cout << *ptr2;
        ++ptr2;
    }

}
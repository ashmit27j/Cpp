#include<iostream>
#include<string>
using namespace std;
int main()
{
    int len, sum = 0;
    string str1, str2;
    cin.ignore();
    getline(cin, str1);
    getline(cin, str2);
    //also check for same length before this
    for (int i = 0; str1[i]!='\0' || str2[i]!='\0'; i++)
    {
        sum += (str1[i] - str2[i]);
    }
    if ( sum == 0 )
        cout << "strings equal!";
    else
        cout << "strings unequal!";
}
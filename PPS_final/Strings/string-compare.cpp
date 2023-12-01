#include<iostream>
#include<string>
using namespace std;
int main()
{
    int len;
    string str1, str2;
    cin.ignore();
    getline(cin, str1);
    getline(cin, str2);
    //also check for same length
    for (int i = 0; str1[i]!='\0' || str2[i]!='\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            cout << "Strings not equal!";
            return 0;
        }
    }
    cout << "strings equal!";
    return 1;
}
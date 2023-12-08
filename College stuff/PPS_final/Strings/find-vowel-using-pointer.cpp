//WAP to find the number of vowels in entered string using pointer
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int count = 0;
    string str;
    cin >> str;
    char *ptr = &str[0];
    while ( *ptr != '\0' )
    {
        if ( *ptr == 'a' ||*ptr == 'e' ||*ptr == 'i' ||*ptr == 'o' ||*ptr == 'u' )
            ++count;
        ++ptr;
    }
    cout << "vowels: " << count;
}

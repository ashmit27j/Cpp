#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "ashmit", newstr = "";
    char *ptr = &str1[0];
    while (*ptr != '\0')
    {
        newstr += *ptr;
        ptr++;
    }
    cout << newstr;
}
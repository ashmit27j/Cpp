#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "India Indoi Indae";
    string word = "In";
    string newstr = "";
    int k = 0, flag = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        k = 0, flag = 0;
        for (int j = i; j < word.length() + i; j++)
        {
            if (str1[j] == word[k])
            {
                flag = 1;
                continue;
            }
            else
            {
                break;
            }
            k++;
        }
        if (flag == 1)
        {
            i += word.length() - 1;
        }
    }
} // namespace name

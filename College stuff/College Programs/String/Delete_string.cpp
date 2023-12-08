#include <iostream>
#include <string>
using namespace std;
int main()
{
    string sentence = "India Indoi Indae";
    string word = "Indoi";
    string newstr = "";
    int k = 0, flag = 0;
    for (int i = 0; i < sentence.length(); i++)
    {
        k = 0, flag = 0;
        for (int j = i; j < i + word.length(); j++)
        {
            if (sentence[j] == word[k])
            {
                flag = 1;
                k++;
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            i += word.length() - 1;
        }
        else
        {
            newstr += sentence[i];
        }
        cout << newstr;
    }
} // namespace name

#include <iostream>
using namespace std;
int length(string str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}
int main()
{
    string str, word;
    int fag = 0;
    // cout<<"Enter a string : ";
    // getline(cin , str);
    // cout<<"Enter word to delete : ";
    // getline(cin , word);
    str = "balls ballz ballk";
    word = "balls";
    int len = length(str);
    int len1 = length(word);
    string newstr = "";
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        fag = 0;
        j = 0;
        if (str[i] == word[0])
        {
            for (int k = i; k < len; k++)
            {
                if (str[k] == word[j])
                {
                    fag++;
                }
                // else
                // {
                //     fag = 0;
                //     break;
                // }
                j++;
            }
        }
        if (fag == 0)
        {
            newstr += str[i];
            continue;
        }
        if (fag == len1)
        {
            i += len1 - 1;
        }
        // newstr+=str[i];
    }
    cout << newstr << endl;
}
/*

        // if(str[i]==word[0] && str[i-1] == ' ' && str[i+len1]==' ') //ashmit is gay
        // {
        //     i+=len1;//2
        // }
        if(str[i]!=word[j] && str[i-1]!=' ')
            newstr+=str[i];
        else
            j++;
        if(str[i]==' ')
            j=0;
        // else
        // newstr += str[i];*/
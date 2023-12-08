#include<iostream>
#include<string>
using namespace std;
struct student
{
    string name;
    int bio, math, sci;
    float avg;
};
void get_data(student &a)
{
    cin.ignore();
    getline(cin, a.name);
    cin >> a.bio >> a.math >> a.sci;
    a.avg = (a.bio + a.math + a.sci) / 3.0;
}
void show_data(student &a)
{
    cout << "\nName: " << a.name;
    cout << "\nAvg: " << a.avg;
    if(a.avg >= 40)
        cout << "\nPASS";
    else
        cout << "\nFAIL";
}
int main()
{
    student s[3];
    for(int i = 0 ; i < 3; i ++ )
    {
        get_data(s[i]);
    }
    for(int i = 0 ; i < 3; i ++ )
    {
        show_data(s[i]);
    }
}
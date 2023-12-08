//Define structure called cricket that will describe the following data Player name, country name, no of matches played & batting avg. 
//Develop a program that store information of 10 players and display names of players having batting average greater than 50. 
#include<iostream>
#include<string>
using namespace std;
struct cricket
{
    string name;
    string country;
    int matches;
    int bat_avg;
};
void get_data(cricket &a)
{
    cin.ignore();
    getline(cin, a.name);
    getline(cin, a.country);
    cin >> a.matches;
    cin >> a.bat_avg;
}
void show_data(cricket &a)
{
    cout << a.name << endl;
    cout << a.country << endl;
    cout << a.bat_avg << endl;
    cout << a.matches << endl;
}
int main()
{
    cricket p[10];
    for( int i = 0; i < 3; i ++ )
    {
        get_data(p[i]);
    }
    cout << "Players with bat_avg > 50 \n";
    for( int i = 0; i < 3; i ++ )
    {
        if(p[i].bat_avg > 50)
            show_data(p[i]);
    }
    
}
//There are 50 computers in an office. Every computer has following information CPU type, hard disk size. 
//WAP to store details of all 50 computers and then print details of computers having hard disk size greater than 8 GB.	 
#include<iostream>
#include<string>
using namespace std;
struct computer
{
    string cpu_type;
    float hdd_size;
};
void get_data(computer &a)
{
    cout << "Input data: \n";
    cin.ignore();
    getline(cin, a.cpu_type);
    cin >> a.hdd_size;
}
void show_data(computer &a)
{
    cout << "\nCpu type: ";
    cout << a.cpu_type;
    cout << "\nHdd size: ";
    cout << a.hdd_size;
}
int main()
{
    computer c[3];
    for(int i = 0; i < 3; i ++ )
    {
        get_data(c[i]);
    }
    for(int i = 0; i < 3; i ++ )
    {
        show_data(c[i]);
    }
}
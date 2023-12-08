//Define structure Student having data members: Roll no, name, address, branch and percentage. 
//WAP to read and display information of a student. 
#include<iostream>
#include<string>
using namespace std;
struct Student
{
    int rollno;
    string name;
};
void input_data(Student &a)
{
    cin >> a.rollno;
    cin >> a.name;
}
void show_data(Student &a)
{
    cout << "rollno: " << a.rollno;
    cout << "name: " << a.name;
}
int main()
{
    Student s1;
    input_data(s1);
    show_data(s1);
}
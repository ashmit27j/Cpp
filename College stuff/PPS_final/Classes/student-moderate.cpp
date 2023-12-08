//Create a class student having data members name, rollno & branch and define two member function getData( ) & display( ) 
//for taking input & display the same. 
//Write a complete C++ code for displaying the information of a student. 
#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    string name;
    string branch;
    int rollno;

public:
    void getData();
    void display();
};
void Student::getData()
{
    cin.ignore();
    getline(cin, name);
    getline(cin, branch);
    cin >> rollno;
}
void Student::display()
{
    cout << "\nName: " << name;
    cout << "\nbranch: " << branch;
    cout << "\nrollno: " << rollno;
}
int main()
{
    Student s1;
    s1.getData();
    s1.display();
}

/*
Declare a class employee having data members as id, name and member function as getData( ) & display( ). 
Derive class manager from employee class. Manager class has data members as salary and member functions as getdata( ) & display( ). 
Again, derive class project manager from manager. Project manager class have data members as total experience, number of projects 
handled and member function as getdata() & display(). Write a program using multilevel inheritance to display all details of project manager.
*/
#include<iostream>
#include<string>
using namespace std;
class employee
{
protected:
    int id;
    string name;
public:
    void getData();
    void display();
};
class Manager: protected employee
{
protected:
    int salary;
public:
    void getData();
    void display();
};
class Project_Manager: protected Manager
{
protected:
    int exp, proj;
public:
    void getData();
    void display();
};
void employee::getData()
{
    cin >> name;
    cin >> id;
}
void Manager::getData()
{
    cin >> salary;
}
void Project_Manager::getData()
{
    employee::getData();
    Manager::getData();
    cin >> exp;
    cin >> proj;
}
void employee::display()
{
    cout << name << endl;
    cout << id << endl;
}
void Manager::display()
{
    cout << salary << endl;
}
void Project_Manager::display()
{
    cout << exp << endl;
    cout << proj << endl;
}
int main()
{
    
}
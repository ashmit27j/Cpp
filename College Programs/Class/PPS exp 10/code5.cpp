/*
Declare a class employee having data members as id, name and member function as getData( ) & display( ). Derive class manager from employee class. Manager class has data members as salary and member functions as getdata( ) & display( ). Again, derive class project manager from manager. Project manager class have data members as total experience, number of projects handled and member function as getdata() & display(). Write a program using multilevel inheritance to display all details of project manager.
*/
#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
    int id;
    string name;

public:
    void getData();
    void display();
};
class Manager : protected Employee
{
protected:
    int salary;

public:
    void getData();
    void display();
};
class Project_manager : private Manager
{
private:
    string experience;

public:
    void getData();
    void display();
};
int main()
{
}
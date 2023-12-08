/*
Class “Employee” has data members: Emp_id, Emp_name and Emp_sal 
and this class uses a parameterized constructor to accept the details of 2 employees and 
display the results using the display () function. 
*/
#include<iostream>
using namespace std;
class Employee
{
protected:
    string Emp_name, Emp_id;
    int Emp_sal;
public:
    Employee(string name = "", string id = "", int sal = 0)
    {
        Emp_name = name;
        Emp_id = id;
        Emp_sal = sal;
    }
    void display();
};
void Employee::display()
{
    cout << Emp_name << endl; 
    cout << Emp_id << endl; 
    cout << Emp_sal << endl; 
}
int main()
{
    string name, id;
    int sal;
    cout << "emp 1" << endl;
    cin.ignore();
    getline(cin, name);
    getline(cin, id);
    cin >> sal;
    Employee emp1(name, id, sal);
    emp1.display();
    cout << "emp 2" << endl;
    Employee emp2(name, id, sal);
    emp2.display();
}
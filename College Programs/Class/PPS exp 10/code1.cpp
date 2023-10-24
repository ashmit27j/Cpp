/*
Class “Employee” has data members: Emp_id, Emp_name and Emp_sal and this class uses a parameterized constructor to accept the details of 2 employees and display the results using the display () function.
*/
#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    int Emp_id;
    int Emp_sal;
    string Emp_name;

public:
    Employee(int id, int sal, string name)
    {
        Emp_id = id;
        Emp_sal = sal;
        Emp_name = name;
    }
    void display();
};
void Employee::display()
{
    cout << "Emp name: " << Emp_name;
    cout << "Emp id: " << Emp_id;
    cout << "Emp sal: " << Emp_sal;
}
int main()
{
    int id1, id2, sal1, sal2;
    string name1, name2;

    cout << "Enter data for person 1 : ";
    cin >> name1 >> id1 >> sal1;
    Employee emp1(id1, sal1, name1);

    cout << "Enter data for person 1 : ";
    cin >> name2 >> id2 >> sal2;
    Employee emp2(id2, sal2, name2);

    cout << "Person 1: " << endl;
    emp1.display();
    cout << "Person 2: " << endl;
    emp2.display();
}
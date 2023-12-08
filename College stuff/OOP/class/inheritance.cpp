#include <iostream>
using namespace std;
class Parent
{
protected:
    int Parent_age;

public:
    Parent()
    {
        Parent_age = 0;
    }
    void show_data();
    void get_data();
};
void Parent::get_data()
{
    cout << "Enter child age: ";
    cin >> Parent_age;
}
void Parent::show_data()
{
    cout << Parent_age;
}
class Child : private Parent
{
private:
    int Child_age;

public:
    Child()
    {
        Child_age = 0;
    }
    void show_data();
    void get_data();
};
void Child::get_data()
{
    cout << "Enter child age: ";
    cin >> Child_age;
}
void Child::show_data()
{
    cout << Child_age;
}
int main()
{
    Child obj;
    obj.show_data();
}
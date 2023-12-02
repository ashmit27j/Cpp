//Create a class named 'Student' with a string (char array) variable 'name' and an integer variable 'roll_no'. 
//Assign the value of roll_no as 2  and that of name as "John" in main( ) function by creating an object of the class Student and display the same.
#include<iostream>
#include<string>
using namespace std;
class Student
{
    public:
    string name;
    int roll_no;
};
int main()
{
    Student s1;
    s1.name = "John";
    s1.roll_no = 2;
    cout << s1.name << endl;
    cout << s1.roll_no << endl;
}
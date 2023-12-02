/*
5.	Create a class named “Shapes” with data member area. 
Write a member function “calArea” with two float parameters to calculate the area of rectangle and 
overload the same function having one float parameter to calculate the area of square. 
*/
#include<iostream>
using namespace std;
class Shapes 
{
private:
    float area;
public:
    void calArea(float, float);
    void calArea(float);
    void display();
};
void Shapes::calArea(float f1, float f2)
{
    area = f1 * f2;
}
void Shapes::calArea(float f1)
{
    area = f1 * f1;
}
void Shapes::display()
{
    cout << "Area: " << area;
}
int main()
{
    Shapes s;
    float f1, f2;
    cin >> f1 >> f2;
    cout << "\narea of rectangle: ";
    s.calArea(f1,f2);
    s.display();
    cout << "\narea of square: ";
    s.calArea(f1);    
    s.display();
}
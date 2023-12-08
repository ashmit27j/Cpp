//write a code to find the area of a cuboid using inline function
/*
 An inline function is a function that is expanded in line when it is called. 
When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call. 
This substitution is performed by the C++ compiler at compile time. An inline function may increase efficiency if it is small.
*/
#include<iostream>
using namespace std;
inline int area(int side)
{
   return side*side*side;
}
int main()
{
   int side;
   cout << "Enter side:\n";
   cin >> side;
   cout << "Area: " << area(side);
}
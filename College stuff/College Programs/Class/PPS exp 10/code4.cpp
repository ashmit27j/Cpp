/*
Create a class rectangle with (length, width), derive a class box with additional member (depth). In both the classes write parameterized constructor to initialize data member and area ( ) function to find area. Define main ( ) and create appropriate objects to call area ( ) function.
*/
#include <iostream>
using namespace std;
class rectangle
{
protected:
    float len;
    float wid;

public:
    rectangle(float l = 0, float w = 0)
    {
        len = l;
        wid = w;
    }
    void Area()
    {
        cout << "rectangle: " << endl;
        cout << len * wid << endl;
    }
};
class box : private rectangle
{
private:
    float depth;

public:
    // does the constructor for rectangle get called as well?
    box(float l = 0, float w = 0, float d = 0)
    {
        rectangle(l, w);
        depth = d;
    }
    void Area()
    {
        cout << "Box: " << endl;
        cout << (2 * len * wid) + (2 * len * depth) + (2 * depth * wid) << endl;
    }
};
int main()
{
    rectangle obj1(10, 20);
    box obj2(10, 20, 30);
    obj1.Area();
    obj2.Area();
    return 0;
}
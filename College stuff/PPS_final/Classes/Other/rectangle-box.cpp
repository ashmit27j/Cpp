/*
Create a class rectangle with (length, width), derive a class box with additional member (depth). 
In both the classes write parameterized constructor to initialize data member and area ( ) function to find area. 
Define main ( ) and create appropriate objects to call area ( ) function. 
*/
#include<iostream>
using namespace std;
class rectangle
{
protected:
    int length;
    int width;
public:
    rectangle()
    {
        length = width = 0;
    }
    rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    void area()
    {
        cout << length*width << endl;
    }
};
class box: private rectangle
{
private:
    int depth;
public:
    box()
    {
        rectangle();
        depth = 0;
    }
    box(int len, int wid, int dep)
    {
        rectangle(len, wid);
        depth = dep;
    }
    void volume()
    {
        cout << length*width*depth;
    }
};
int main()
{
    box obj_box(100,10,3);
    rectangle obj_rec(30,20);
    cout << "BOX: \n" ;
    obj_box.volume();
    cout << "rectangle: \n" ;
    obj_rec.area();
}
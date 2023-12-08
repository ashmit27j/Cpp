//===================================================
//7a
//===================================================
#include<iostream>
using namespace std;
class Shape
{
    protected:
    double a, b;

    public:
    void get_data();
    //parameterized, so that we can check if its a triangle or rectangle
    //if 1 then triangle, if 2 then rectangle
    void display_area(int);
};

void Shape::get_data()
{
    cout<<"Input data: ";
    cin>>a>>b;
}

void Shape::display_area(int ch)
{
    if( ch == 1 )
    {
        cout<<"Area = "<<(0.5*a*b);
    }
    else if( ch == 2)
    {
        cout<<"Area = "<<(a*b);
    }
}

class triangle : public Shape
{
};

class rectangle : public Shape
{
};

int main()
{
    triangle obja;
    rectangle objb;
    cout<<"Triangle: ";
    obja.get_data();
    obja.display_area(1);
    cout<<"\nRectangle: ";
    objb.get_data();
    objb.display_area(2);
}

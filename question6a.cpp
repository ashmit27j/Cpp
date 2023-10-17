//===================================================
//6a
//===================================================
#include<iostream>
using namespace std;
class Student
{
    protected:
    int rollno;

    public:
    void getNumber(int);
    void putNumber();
};

class Test:protected Student
{
    protected:
    int bio, chem, math;

    public:
    void getMarks(int, int, int);
    void putMarks();
};

class Result:private Test
{
    private:
    int totalMarks;
    public:
    void display(); // invokes putNumber and putMarks
};

void Student::getNumber(int num)
{
    rollno = num;
}

void Student::putNumber()
{
    cout<<"\nRoll number: "<<rollno;
}

void Test::getMarks(int a, int b, int c)
{
    bio = a;
    chem = b;
    math = c;
}

void Test::putMarks()
{
    cout<<"\nBiology: "<<bio;
    cout<<"\nChemistry: "<<chem;
    cout<<"\nMath: "<<math;
}

void Result::display()
{
    int rollno;
    int a, b, c;
    cout<<"Enter your rollno: ";
    cin>>rollno;
    cout<<"\nEnter bio: ";
    cin>>a;
    cout<<"\nEnter Chem: ";
    cin>>b;
    cout<<"\nEnter Math: ";
    cin>>c;
    //input rollno
    getNumber(rollno);
    getMarks(a, b, c);
    //display:
    putNumber();
    putMarks();
    totalMarks = bio+chem+math;
    cout<<"\nTotal marks : "<<totalMarks;
}

int main()
{
    Result obj;
    obj.display();
}

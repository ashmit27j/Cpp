#include<iostream.h> 
class student 
{ 
protected: 
    int roll_number; 
public: 
    void get_number(int a = 0)
    { 
        roll_number=a; 
    } 
    void put_number( )
    { 
        cout<<" Roll number:"<<roll_number<<"\n"; 
    } 
}; 

class test : public student 
{ 
protected: 
    float sub1; 
    float sub2; 
    public: 
    void test:: get_marks(float x, float y) 
    { 
        sub1=x; 
        sub2=y; 
    } 
    void test:: put_marks() 
    { 
        cout<<"marks in sub1 = "<<sub1<<"\n"; 
        cout<<"marks in sub2 = "<<sub2<<"\n"; 
    } 
}; 
class result : public test 
{  
    float total; 
    public:  
    void result::display(void) 
    {	
        total=sub1+sub2; 
        put_number(); 
        put_marks(); 
        cout<<"total = "<<total <<"\n"; 
    } 
} 
int main( ) 
{	
    result student1; 
    student1.get_number(111); 
    student1.get_marks(75.0,59.5); 
    student1.display(); 
    return 0; 
}
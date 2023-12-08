//Create a student record (name, rollno, marks of 3 subjects and score), calculate the average, store average in a score data member. 
//If score<40, declare FAIL else PASS along with student details, maintain 10 students records. 
//(make use of member function to read and display records)

#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    string name;
    int bio, math, phy;
    float score;

public:
    void getData();
    void display();
};
void Student::getData()
{
    cin.ignore();
    getline(cin, name);
    cin >> bio >> math >> phy;
    score = (bio + math + phy) / 3.0;
}
void Student::display()
{
    cout << "\nName: " << name;
    cout << "\nscore: " << score;
    if(score>40)
        cout << "\nPASS";
    else    
        cout << "\nFAIL";
}
int main()
{
    Student s[3];
    for(int i = 0 ; i < 3; i++)
    {
        s[i].getData();
    }
    for(int i = 0 ; i < 3; i++)
    {
        s[i].display();
    }
}

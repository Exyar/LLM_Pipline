#include<iostream>
using namespace std;
class student
{
    string name;
    int marks;
    int roll;
    public:
    student()
    {
        marks=0;
        roll=100;

    }
    void getdata()
    {
        cout<<"name is: ";
        cin>>name;
        cout<<"marks is: ";
        cin>>marks;
        cout<<"roll is: ";
        cin>>roll;
    }
    void display()
    {
        cout<<"name is: \n"<<name;
        cout<<"marks is: \n"<<marks;
        cout<<"roll is: \n"<<roll;
    }
};
int main()
{
    student s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3.getdata();

    s1.display();
    s2.display();
    s3.display();
    return 0;   
}
#include<iostream>
using namespace std;

class Employee
{
    static int count;
    int id;

    public:
    void setdata()
    {
        cout<<"enter the id: "<<endl;
        cin>>id;
        count++;
    }
    void getdata()
    {
        cout<<"the id is "<<id<<" this is count "<<count<<endl;
    }
    static void getCount()
    {
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee:: count=1000;    // default value is zero ||||| (it is shared by all variable --> aksh ,ronit , daksh)
int main()
{
    // count is the static data meber of class employee 
    Employee Aksh,Ronit,Daksh;
    Aksh.setdata(); 
    Aksh.getdata();
    Employee::getCount();  // static function can only access to the static variable

    Ronit.setdata(); 
    Ronit.getdata();
    Employee::getCount();

    Daksh.setdata(); 
    Daksh.getdata();
    Employee::getCount();
    return 0;
}
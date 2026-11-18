#include<iostream>
using namespace std;
class employee
{
        int age;
        int salary;
    public:
        employee()
        {
            cout<<"\nyou are in default constructor";
            salary=1000;
            age=24;
        }
        employee(int x)
        {
            age=x;
            cout<<"\nyou are in parameterised constructor";
        }
        employee(const employee &obj)
        {
            this->salary=obj.salary; // ye bhi right hai
            salary=obj.salary;   // ye bhi right hai
            
            cout<<"\n"<<this->salary;
        }
        void display()
        {
            cout<<"\n"<<salary;
        }
};
int main()
{
    employee s1;      // default constructor chalega
    //employee s2(40); // parameterised constructor chalega -> default nahi chalega
    //s2.display();
    employee s2(s1);
    //employee s4(100);     // parameterised  constructor chalega
    
    return 0;
}
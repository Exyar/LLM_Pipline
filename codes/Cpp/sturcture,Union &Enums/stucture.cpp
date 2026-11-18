#include<iostream>
using namespace std;

typedef struct employee
{
    int id;
    int salary;
    string name;
}emp;


int main()
{
    emp aksh;
    aksh.id=123;
    aksh.name="jack";
    aksh.salary=10000;

    cout<<"id is : "<<aksh.id<<endl;
    cout<<"character is : "<<aksh.name<<endl;
    cout<<"salary is : "<<aksh.salary<<endl;


    return 0;
}
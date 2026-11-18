#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age: "<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"you are 18 "<<endl;
        break;
    case 22:
    cout<<"22"<<endl;
        break;
    default:
    cout<<"not special"<<endl;
        break;
    }
    return 0;
}
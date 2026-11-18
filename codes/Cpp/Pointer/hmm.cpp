#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int*b=&a;
    int **c=&b;
    cout<<"value of a by b= "<<*b;
    cout<<"\nvatue of b or address of a : "<<b<<"\nvatue of b or address of a : "<<&a<<endl;
    cout<<"value of c or address of b= "<<c<<endl;
    cout<<"actual value we want by c: "<<**c;
    return 0;
}
#include<iostream>
using namespace std;

typedef union 
{
    int rice;
    char car;
    float rupees;
}Money;
int main()
{
    Money m1;
    m1.rice=100;
    m1.car ='A';
    m1.rupees=200.123;
    //cout<<m1.car;
    cout<<m1.rice;
    //cout<<m1.rupees;
    return 0;
}

// union only take one value or thing at a time like he can have multiple variable but it share memory wiht all element so overall it has only one memory so the last thing we asign to it get in it above all will get grabage value.

// A very intresting point is we can't make a string variable inside it bcuz of some construtor issue
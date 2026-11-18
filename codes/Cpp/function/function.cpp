#include<iostream>
using namespace std;

int sum(int a,int b)
{
    // a n b are formal parameter 
    return a+b;
}
int main()
{
    int num1,num2;
    cout<<"enter num :"<<endl;
    cin>>num1;
    cout<<"enter num :"<<endl;
    cin>>num2;
    // num1 n num2 are actual parameter
    cout<<"the sum is :"<<sum(num1,num2);
    return 0;
}
#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c=a+b;
    return b;
}

void sawp(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
void realsawp(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void swapRefrenceVariable(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp; 
}
int main()
{
    int i=4;
    int j=5;

    
    cout<< "i n j are not swapped";
    sawp(i,j);
    cout<<"\ni ="<<i;
    cout<<"\nj="<<j;


    realsawp(&j,&i);
    cout<<"\nnow they are swapped by pointers"<<endl;
    cout<<"i="<<i;
    cout<<"\nj="<<j;


    swapRefrenceVariable(i,j);
    cout<<"\nnow they are swapped by refrence variable"<<endl;
    cout<<"i="<<i;
    cout<<"\nj="<<j;
    return 0;
}
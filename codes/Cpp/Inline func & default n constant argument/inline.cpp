#include<iostream>
using namespace std;
//inline function
inline int sum(int i,int j)
{
    return i+j;
}

//default argument is add
int add(int a,int add=5)
{
    return a+add;
}


//
int main()
{
    int a,b;
    cout<<"enter value"<<endl;
    cin>>a>>b;
    cout<<"the sum is "<<sum(a,b)<<endl;
    cout<<"adding 5 in a is :"<<add(a);
    return 0;
}
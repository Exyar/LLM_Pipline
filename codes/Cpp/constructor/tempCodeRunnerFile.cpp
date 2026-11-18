#include<iostream>
using namespace std;
int x;
int main()
{
    const int i=10;
    register int y=5;
    cout<<i;
    x=20;
    y=20;
    cout<<"\n"<<y;
    return 0;
}
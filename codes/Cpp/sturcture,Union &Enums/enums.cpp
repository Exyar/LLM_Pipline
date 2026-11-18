#include<iostream>
using namespace std;

int main()
{
    enum Meal {breakfast,Lunch,Dinner};
    cout<<breakfast;
    cout<<Lunch;
    cout<<Dinner;
    Meal m1=breakfast;
    cout<<m1;
    return 0;
}
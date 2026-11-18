#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age: "<<endl;
    cin>>age;
    if(age>18)
    cout<<"absolutly you can come";
    else if(age==18)
    cout<<"can i check your id";
    else
    cout<<"Kids not allowed";
    return 0;
}
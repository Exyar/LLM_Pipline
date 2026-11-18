#include<iostream>
using namespace std;

int main()
{
    string Email;
    string op="odoo.com";
    cout<<"Enter Email:"<<endl;
    cin>>Email;
    int i=0;
    int count=0;
    while(Email[i]=='@')
    {
        count++;
        i++;
    }
    // i=i-1;
    int j=0;
    int inCount=0;
    if (count<=5)
    {
        while(Email[i]=='\0')
        {
            if(Email[i]==op[j])
            {
                inCount++;
            }
        }
    }
    if(inCount==8)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}


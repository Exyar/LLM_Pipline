#include<iostream>
using namespace std;
class hotel
{
    string name;
    int room_no;
    int days;
    int rent;
    public:
    hotel()
    {
        days=0;
        rent=0;
    }
    void getdata()
    {
        cout<<"enter name: ";
        getline(cin>>ws,name);
        cout<<"enter room no.:";
        cin>>room_no;
        cout<<"enter days:";
        cin>>days;
        cout<<"enter rent:";
        cin>>rent;

    }
    void bill()
    {
        cout<<"bill of => "<<name<<" is : "<<days*rent;
    }
};
int main()
{
    hotel h1,h2,h3;
    h1.getdata();
    h2.getdata();
    h3.getdata();

    h1.bill();
    h2.bill();
    h3.bill();
    
    return 0;
}
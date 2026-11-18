#include<iostream>
#include<limits.h>
using namespace std;
class mobile
{
    string brand;
    string modal;
    int price;
    public:
    void getdata()
    {
        cout<<"enter brand: ";
        getline(cin>>ws,brand);
        cout<<"enter modal: ";
        getline(cin>>ws,modal);
        cout<<"enter price: ";
        cin>>price;
    }
    int max()
    {
        return price;
    }
};
int main()
{
    mobile m1,m2,m3,m4,m5;
    m1.getdata();
    m2.getdata();
    m3.getdata();
    m4.getdata();
    
    int p1=m1.max();
    int p2=m2.max();
    int p3=m3.max();
    int p4=m4.max();
    int max=INT_MIN;
    if(max<p1)
    {
        max=p1;
    }
    if(max<p2)
    {
        max=p2;
    }
    if(max<p3)
    {
        max=p3;
    }
    if(max<p4)
    {
        max=p4;
    }
    
    cout<<"max= "<<max;
    return 0;
}
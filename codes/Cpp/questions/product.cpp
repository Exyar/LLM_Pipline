#include<iostream>
using namespace std;
class product
{
    string name;
    int quantity;
    int price;
    public:
    product()
    {
        quantity=0;
        price=0;
    }
    void getdata()
    {
        cout<<"enter name: ";
        getline(cin>>ws, name);
        cout<<"enter quantity: ";
        cin>>quantity;
        cout<<"enter price: ";
        cin>>price;
    }
    void bill()
    {
        cout<<"\nbill : "<<price*quantity;
    }

};
int main()
{
    product p1,p2,p3;
    p1.getdata();
    p2.getdata();
    p3.getdata();

    p1.bill();
    p2.bill();
    p3.bill();

    
    return 0;
}
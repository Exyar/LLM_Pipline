#include<iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter ()
    {
        counter=0;
    }
    void setPrice();
    void DisplayPrice();
};

void Shop::setPrice()
{
    cout<<"enter Id of your item: "<<endl;
    cin>>itemId[counter];
    cout<<"enter Price of your item: "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
 void Shop::DisplayPrice()
 {
    for(int i=0;i<counter;i++)
    {
        cout<<"Id is = "<<itemId[i]<<endl;
        cout<<"Price is = "<<itemPrice[i]<<endl;
        cout<<endl;
    }
 }


int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.DisplayPrice();
    return 0;
}
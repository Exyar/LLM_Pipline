#include<iostream>
using namespace std;
class room
{
    string name;
    int room_no;
    int rent;
    
    public:
    void display()
    {
        cout<<"\nName   : "<<name;
        cout<<"\nRoom No: "<<room_no;
        cout<<"\nRent   : "<<rent;
    }
    room(string namee, int no ,int rente)
    {
        rent=rente;
        room_no=no;
        //strcpy(name,namee);
        name=namee;
    
    }
    int getrent()
    {
        
        return rent;
    }
    ~room()
    {
        cout<<"\nDestructor";
    }
};
int main()
{
    room r1("aksh",123,1000);
    room r2("hinata",124,2000);
    room r3("daksh",125,3000);
    r1.display();
    r2.display();
    r3.display();
    //int totalrent=r3.rentsum(1000,2000,3000);
    //r3.display(totalrent);
    int m=(r1.getrent()+r2.getrent()+r3.getrent());
    cout<<"\n TOTAL RENT : "<<m;

    return 0;
}
#include<iostream>
using namespace std;

class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int i,int j,int k);
    void getdata()
    {
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
        cout<<"value of c is "<<c<<endl;
        cout<<"value of d is "<<d<<endl;
        cout<<"value of e is "<<e<<endl;

    }


};

void employee::setdata(int i,int j,int k)
{
    a=i;
    b=j;
    c=k;
}
int main()
{
    employee aksh;
    aksh.d=23;
    aksh.e=56;
    aksh.setdata(1,2,4);
    aksh.getdata();
    return 0;
}
#include<iostream>
using namespace std;
 class binary{
    string s;
    public:
    void read();
    void check_binary();
    void ones_compliment();
    void display();
 };

 void binary :: read()
 {
    cout<<"enter binary num : ";
    cin>>s;
 }


 void binary :: check_binary()
 {
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrect binary format"<<endl;
            break;
        }
    }
 }

 void binary::ones_compliment()
 {
    check_binary();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
          s.at(i)='1';  
        }
       else
        {
          s.at(i)='0';  
        }
    }
 }

 void binary :: display()
 {
    cout<<"display your binary num = ";
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
 }
int main()
{
    // Nesting of member function
   binary b;
   b.read();
  // b.check_binary();
   b.display();
   b.ones_compliment();
   b.display();
    return 0;
}
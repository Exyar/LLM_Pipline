#include<iostream>
using namespace std;

int main()
{
    vector<char>vec={'a','b','c','d',};
    //  size()
    cout<<"size = "<<vec.size( )<<endl;
     
    //  push_back()
    vec.push_back('e');
    vec.push_back('f');
    vec.push_back('g');
    cout<<"after push back size = "<<vec.size( )<<endl;

    //  pop_back()
    vec.pop_back();
    cout<<"after pop back size = "<<vec.size( )<<endl;

    //  front
    cout<<vec.front()<<endl;

    //  back
    cout<<vec.back()<<endl;

    //  at
    cout<<vec.at(3)<<endl;




    for(char i: vec)
     {
        cout<< i << endl;
     }
    return 0;
}
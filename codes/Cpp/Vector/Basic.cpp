#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /* vector<int>vec;   // it will be of size 0
    cout<<vec[0]<<endl; */     // nothing will print
    /* vector<int>vec1={1,2,3};
     cout<<vec1[0]<<endl; */   // 1 will print



     vector<int>vec2(3,0);
     for(int i: vec2)
     {
        cout<< i << endl;
     }

     vector<char>vec3={'a','b','c','d'};
     for(char i: vec3)
     {
        cout<< i << endl;
     }
    return 0; 
}
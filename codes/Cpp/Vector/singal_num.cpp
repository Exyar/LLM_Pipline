#include<iostream>
using namespace std;

int main()
{
    vector<int>vec={1,2,1,2,4,4,3,5,3 };
    int ans=0;
    for(int val: vec)
    {
        ans=ans^val;
    }
    cout<<ans;
    return 0;
}       
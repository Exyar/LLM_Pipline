#include<iostream>
using namespace std;
class student
{
    int marks;
    int sum;
    public:
   /*  student(const student &obj)
    {

    } */
    student(int x,int y)
    {
        this->sum=x+y;
        cout<<"sum is: "<<sum;
    }
};
int main()
{
    int n=4;
    int m=5;
    student s1(n,m);
    return 0;
}
#include<iostream>
using namespace std;
class student
{
        int age;
        int marks;
    public:
        void inline add()
        {
            int sum;
            sum=age+marks;
            cout<<sum;     
        }
        student(int x, int y)
        {
            age=x;
            marks=y;
        }
    
};
int main()
{
    student s1(12,13);
    s1.add();
    return 0;
}

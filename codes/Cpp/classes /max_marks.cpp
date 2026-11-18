#include<iostream>
using namespace std;
class student
{
    int marks;
    public:
    int getdata();
};
int max(student *a)
{
    int MAX=a[0].getdata();
    for(int i=1;i<5;i++)
    {
        int cmp=a[i].getdata();
        if(MAX<cmp)
        {
            MAX=cmp;
        }
    }
    return MAX;

}

int main()
{
    student arr[5];
    int s=max(arr);
    printf("%d",s);
    return 0;
}
int student::getdata()
{
    printf("enter marks: ");
    scanf("%d",&marks);
    return marks;
}
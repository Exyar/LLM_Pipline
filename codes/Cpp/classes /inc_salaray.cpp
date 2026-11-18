#include<iostream>
using namespace std;
class student
{
    int marks;
    public:
    int getdata();
};
int* incsalary(student *a,int *ele)
{
    for(int i=0;i<5;i++)
    {
        int cmp=a[i].getdata();
        if(cmp>50)
        {
            ele[i]=cmp+cmp/10;
            
        }
        else
        {
            ele[i]=cmp;
        }
    }
    return ele;

}

int main()
{
    student arr[5];
    int element[5];
    int *s=incsalary(arr,element);
    for(int i=0;i<5;i++)
    {
        printf("%d\n",s[i]);
    }
    return 0;
}
int student::getdata()
{
    printf("enter marks: ");
    scanf("%d",&marks);
    return marks;
}
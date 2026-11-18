#include<stdio.h>
typedef struct emp
{
    int salary;
}emp;
int salaryinc(emp *s)
{
    s->salary+=10000;
    return s->salary;
}
int main()
{
    emp m1;
    printf("enter salary: ");
    scanf("%d",&m1.salary);
    int s=salaryinc(&m1);
    printf("%d",s);
}
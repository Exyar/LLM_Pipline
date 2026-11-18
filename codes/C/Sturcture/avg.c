#include<stdio.h>
int main()
{
    typedef struct student
    {
        char name[20];
        int marks;
    }student;
    student stu[5];
    for(int i=0;i<5;i++)
    {
        printf("enter name: ");
        scanf("%s",&stu[i].name);
         printf("enter marks: ");
        scanf("%d",&stu[i].marks);
    }
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=stu[i].marks;
    }
    int avg=sum/5;
    printf("%d",avg);
    
}
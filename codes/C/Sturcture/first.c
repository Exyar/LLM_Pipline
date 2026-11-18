#include<stdio.h>

int main()
{
    struct student
    {
        int age;
        float cgpa;
        char name[20];
    };
    struct student s[3];
    for(int i=0;i<3;i++)
    {
    printf("enter age :  ");
    scanf("%d",&s[i].age);
    printf("enter CGPA :   ");
    scanf("%f",&s[i].cgpa);
    printf("Enter name :   ");
    scanf("%s",&s[i].name);    
    }
    for(int i=0;i<3;i++)
    {
    printf("\t%d",s[i].age);
    printf("\t%f",s[i].cgpa);
    printf("\t%s",s[i].name);
    }

    int j = s[1].age + s[2].age;
    printf("%d",j);
}

#include<stdio.h>
#include<string.h>
typedef struct student
{
    char name[20];
}student;

int main()
{
    student s1,s2,s3,s4,s5;
    char a[20];
    printf("enter name: ");
    gets(a);
    printf("enter name: ");
    scanf("%s",s1.name);
    printf("enter name: ");
    scanf("%s",s2.name);
    printf("enter name: ");
    scanf("%s",s3.name);
    printf("enter name: ");
    scanf("%s",s4.name);
    printf("enter name: ");
    scanf("%s",s5.name);
    if(strcmp(a,s1.name)==0)
    {
        printf("found");
    }
    if(strcmp(a,s2.name)==0)
    {
        printf("found");
    }
    if(strcmp(a,s3.name)==0)
    {
        printf("found");
    }
    if(strcmp(a,s4.name)==0)
    {
        printf("found");
    }
    if(strcmp(a,s5.name)==0)
    {
        printf("found");
    }
    return 0;
}

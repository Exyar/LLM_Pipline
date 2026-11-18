#include<stdio.h>
int main()
{
    typedef struct student{
        char name[20];
        int roll;
        float marks;
    }student;
     
    student aksh,aditya,rohan;
    printf("enter name: ");
    scanf("%s",&rohan.name);
    printf("enter roll no: ");
    scanf("%d",&rohan.roll);
    printf("enter marks: ");
    scanf("%f",&rohan.marks);
    printf("%s %d %f",rohan.name,rohan.roll,rohan.marks);
    
    printf("enter name: ");
    scanf("%s",&aksh.name);
    printf("enter roll no: ");
    scanf("%d",&aksh.roll);
    printf("enter marks: ");
    scanf("%f",&aksh.marks);
    printf("%s %d %f",aksh.name,aksh.roll,aksh.marks);

    printf("enter name: ");
    scanf("%s",&aditya.name);
    printf("enter roll no: ");
    scanf("%d",&aditya.roll);
    printf("enter marks: ");
    scanf("%f",&aditya.marks);
    printf("%s %d %f",aditya.name,aditya.roll,aditya.marks);
    return 0;
}
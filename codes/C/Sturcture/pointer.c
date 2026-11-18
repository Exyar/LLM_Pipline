#include<stdio.h>
typedef struct student
{
    int marks;
}student;
int show(student *p)
{
    printf("%d",p->marks);
    p->marks=p->marks+100;
    return p->marks;
}
int main()
{
    student s1;
    printf("enter marks: ");
    scanf("%d",&s1.marks);
    student *p;
    //p=&s1;
    int a=show(&s1);

    printf("\n%d",a);
    printf("%d",s1.marks);
    return 0;
}
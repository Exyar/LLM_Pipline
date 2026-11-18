#include<stdio.h>
typedef struct student
    {
        int marks;
    }student;
void add(int x,int y)
{
    int z=x+y;
    printf("%d",z);

}
void show(student n)
{
    n.marks=30;
    printf("%d",n.marks);
}
int main()
{
    
    student aksh,aditya,s;
    printf("enter no: ");
    scanf("%d",&aksh.marks);
    printf("enter no: ");
    scanf("%d",&aditya.marks);
    add(aksh.marks,aditya.marks);
    s.marks=20;
    show(s);
    printf("%d",s.marks);
    return 0;
}
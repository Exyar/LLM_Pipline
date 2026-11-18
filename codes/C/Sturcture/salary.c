#include<stdio.h>
int main()
{
    typedef struct emp
    {
        char name[20];
        int salary;
        int id;
    }emp;
    emp aksh,papa,dada;
    printf("enter name:");
    scanf("%s",&aksh.name);
    printf("enter salary:");
    scanf("%d",&aksh.salary);
    printf("enter id:");
    scanf("%d",&aksh.id);

    printf("enter name:");
    scanf("%s",&papa.name);
    printf("enter salary:");
    scanf("%d",&papa.salary);
    printf("enter id:");
    scanf("%d",&papa.id);

    printf("enter name:");
    scanf("%s",&dada.name);
    printf("enter salary:");
    scanf("%d",&dada.salary);
    printf("enter id:");
    scanf("%d",&dada.id);


    if(aksh.salary>papa.salary && aksh.salary>dada.salary)
    {
        printf("%s %d %d",aksh.name,aksh.id,aksh.salary);
    }
    if(papa.salary>aksh.salary && papa.salary>dada.salary)
    {
        printf("%s %d %d",papa.name,papa.id,papa.salary);
    }
    if(dada.salary>papa.salary && dada.salary>aksh.salary)
    {
        printf("%s %d %d",dada.name,dada.id,dada.salary);
    }


    
    return 0;
}
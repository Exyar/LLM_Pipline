#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    char name[20];
    int roll;
    int marks;
}student;

int main()
{
    int n;
    printf("enter size of class: ");
    scanf("%d",&n);
    student* class=(student*)malloc(n*sizeof(student));
    
    char c;
    int last=n;
    for(int i=0;i<n;i++)
    {
        printf("enter name: ");
        scanf("%s",&class[i].name);
        printf("enter marks: ");
        scanf("%d",&class[i].marks);

    }


    do{
        printf("do you want to write more data: ");
        scanf(" %c",&c);
        if(c=='y')
        {
            n++;
            class=(student*)realloc(class,n*sizeof(student));
            for(int i=last;i<n;i++)
            {
                printf("enter name: ");
                scanf("%s",&class[i].name);
                printf("enter marks: ");
                scanf("%d",&class[i].marks);
            }
            last=n;
        }


    }while(c=='y');
    for(int i=0;i<n;i++)
    {
        printf("%s",class[i].name);
        printf("%d",class[i].marks);
    }
    return 0;
}
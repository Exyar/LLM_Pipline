#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    char name[20];
    int roll;
}student;

int main()
{
    int n;
    printf("enter no of student: ");
    scanf("%d",&n);
    student* class=(student*)malloc(n*sizeof(student));
    
    int last=n;
    char c;
    for(int i=0;i<n;i++)
    {
        printf("enter name: ");
        scanf("%s",&class[i].name);
        printf("enter roll : ");
        scanf("%d",&class[i].roll);
    }
    FILE *class1;
    for(int i=0;i<n;i++)
    {
        class1=fopen("class.txt","a+");
        fscanf(class1,"%s",class[i].name);
        fscanf(class1,"%d",&class[i].roll);
    }
    fclose(class1);
    do{
        printf("do you want to add more data of student: ");
        scanf(" %c",&c);
        if(c=='y')
        {
            n++;
            class=(student*)realloc(class,n*sizeof(student));
            for(int i=last;i<n;i++)
            {
                printf("enter name: ");
                scanf("%s",&class[i].name);
                printf("enter roll : ");
                scanf("%d",&class[i].roll);
            }
            for(int i=0;i<n;i++)
            {
                class1=fopen("class.txt","a+");
                fscanf(class1,"%s",class[i].name);
                fscanf(class1,"%d",&class[i].roll);
            }
            last=n;
        }
    }while(c=='y');
    char ch;
    printf("Do you want to read the file in terminal: ");
    scanf("%s",&ch);
    if(ch=='y')
    {
        for(int i=0;i<n;i++)
        {
        printf("\n%s",class[i].name);
        printf("\n%d",class[i].roll);
        }
    }
    
        for(int i=0;i<n;i++)
    {
        fprintf(class1,"\n%s",class[i].name);
        fprintf(class1,"\n%d",class[i].roll);
    }

    

    
}
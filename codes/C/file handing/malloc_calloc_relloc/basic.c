#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
    int roll;
    float marks;
}student;
int main()
{   
    student *p;
    
    p=(student *)malloc(sizeof(student));

    p=(student *)malloc(5*sizeof(student));
    
    
    int *m;
    int* n;
    m=(int *)malloc(5*sizeof(int));

    
 
    return 0;
}
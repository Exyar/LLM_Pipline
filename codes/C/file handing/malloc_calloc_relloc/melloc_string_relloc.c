#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    
    
    printf("Enter the length of string you wanr to entered :    ");
    scanf("%d",&n);
    getchar();
    
    char *p=(char *)malloc(n*sizeof(char));

    printf("Enter string :   ");
    
    scanf("%[^\n]",p);
    
    char *ptr1=(char *)realloc(p,n+10);
    
    p=ptr1;

    while(*p!='\0') // pointer ko end me le jane ke liye so that nayi string end me jude   
    {
        p++;
    }

    *p=' '; // ye aur iske baad wali line pahli aur dusari string ke bich space ke liye hain
    p++;

    printf("enter another string :   ");
    scanf("%s",p);
    
    printf(" %s",ptr1);
    return 0;
}
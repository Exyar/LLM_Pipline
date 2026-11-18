#include<stdio.h>
#include<string.h>
int main()
{
    char str[] ="aksh patidar";
    char*ptr;
    //ptr=&str[9];
    /* ptr =str;
    printf("%c",ptr[2]); */
    ptr=str;
    int i=0;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
        i++;
    }
    
    return 0;
}
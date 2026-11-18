#include<stdio.h>
#include<string.h>
int main()
{  
    // printing givan

    char str[]="I am aksh";
     printf("%s\n",str);
         // or
     puts(str);


    //taking n printing output
    
    char str1[40];
    /* scanf("%s",str1);    // scanf is good ,but when a input is givan like "aksh patidar" it only print "aksh" as output bcuz of the space so we get a new function [  gets(str1) ]
    printf("input is %s",str1); */
         // so
    gets(str1);
    printf("input is %s",str1);
}
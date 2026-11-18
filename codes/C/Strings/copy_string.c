#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="aksh patidar";
    char*s2=s1;
    int i=0;
    /* while(s1[i]!='\0')
    {
        s2[i]=s1[i];       // the code which is comment out is not in use because s1 is directly copy to s2
        i++;
    } */
    puts(s2);
}
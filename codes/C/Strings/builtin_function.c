#include<stdio.h>
#include<string.h>
int main()
{
    char str[5]="aksh";
    char str1[5];
    
    //strcpy(str1,str);
    //int x=strlen(str);
    char s1[11]="aksh";
    char s2[]="patidar";
    strcat(s1,s2);
    printf("%s",s1);
    
    return 0;
}
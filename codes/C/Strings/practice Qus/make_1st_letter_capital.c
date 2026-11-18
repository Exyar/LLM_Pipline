#include<stdio.h>
#include<string.h>
int main()
{
    char str[75];
    printf("enter sentence: ");
    gets(str);
    int x=(int)str[0];
    x=x-32;
    str[0]=(char)x;
    for(int i=1;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            int x=(int)str[i+1];
            x=x-32;
            str[i+1]=(char)x;
        }
    }
    puts(str);
    return 0;
}
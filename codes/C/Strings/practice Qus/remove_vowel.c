#include<stdio.h>
#include<string.h>
int main()
{
    char str[75];
    printf("enter sentence: ");
    gets(str);
    int j=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='o'&&str[i]!='i'&&str[i]!='u')
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';

    puts(str);
    return 0;
}
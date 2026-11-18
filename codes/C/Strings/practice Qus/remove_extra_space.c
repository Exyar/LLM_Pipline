#include<stdio.h>
#include<string.h>
int main()
{
    char str[75];
    printf("enter sentence: ");
    gets(str);
    int size=0;
    int k=0;
    while(str[k]!='\0')
    {
      size++;
      k++;
    }
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(str[i]==' ' && str[i+1]==' ')
        {
            continue;
        }
        str[j]=str[i];
        j++;
    }
    str[j]='\0';
    puts(str);
    return 0;
}

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
    int p=size-1;;
    for(int i=size-1;i>=0;i--)
    {
        if(str[i]==' '|| i==0)
        {
            for(int j=i;j<=p;j++)
            {
                printf("%c",str[j]);
            }
            p=i;
        }
    }
    return 0;
}
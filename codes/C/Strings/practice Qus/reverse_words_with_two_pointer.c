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
    
    int st=0;
    int end;
    for(int i=0;i<=size;i++)
    {
        if(str[i]==' '|| str[i]=='\0')
        {
            end=i-1;
            while(st<=end)
            {
                int swap = str[st];
                str[st]=str[end];
                str[end]=swap;
                st++;
                end--;
            }
            st=i+1;
        }
    }
    
    //puts(str);
    printf("%s",str);
    return 0;
}
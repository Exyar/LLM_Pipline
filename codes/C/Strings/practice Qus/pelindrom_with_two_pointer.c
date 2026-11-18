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
    int end=size-1;
    int h=0;
    while(st<=end)
    {
        if(str[st]==str[end])
        {
            h++;
        }
         st++;
         end--;   
    }
    if(h==size/2||h==size/2+1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    return 0;
}
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
    int maxcount=0;
    int count=0;
    char candidate;
    for(int i=0;i<size;i++)
    {
        count=0;
        for(int j=0;j<size;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(maxcount<count)
        {
            candidate=str[i];
            maxcount=count;
        }
    }
    printf("Element with max frequency is :%c",candidate);

}
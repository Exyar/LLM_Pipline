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
    int count;
    char visited[75];
    visited[0]=str[0];
    int l=1;
    int p=0;
    for(int i=0;i<size;i++)
    {
        count=0;
        for(int j=i+1;j<size;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        
        for(int v=0;v<l;v++)
        {
            if(count>0 && visited[v]==str[i])
            {
                p++;
            }
            visited[v+1]=str[i];
            l++;
        }
        if(p==0)
        {
            printf("%c",str[i]);
        }
        
    }
    return 0;
}
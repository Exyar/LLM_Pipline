#include<stdio.h>
#include<string.h>
int main()
{
    char str1[75];
    printf("enter sentence: ");
    gets(str1);
    int size1=0;
    int k1=0;
    while(str1[k1]!='\0')
    {
      size1++;
      k1++;
    }
    char str2[75];
    printf("enter sentence: ");
    gets(str2);
    int size2=0;
    int k2=0;
    while(str2[k2]!='\0')
    {
      size2++;
      k2++;
    }
    if(size1!=size2)
    {
        printf("no");
        return 0;
    }
    int present=0;;
    for(int i=0;i<size1;i++)
    {
        int count=0;
        for(int j=0;j<size2;j++)
        {
            if(str1[i]==str2[j])
            {
                count++;
            }
        }
        if(count!=0)
        {
            present++;
        }
    }
    if(present==size1)
    {
        printf("yes");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
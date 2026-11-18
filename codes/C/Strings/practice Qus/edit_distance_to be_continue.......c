#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter First string :    ");
    //scanf("%[^\n]s",&str1);
    gets(str1);
    printf("Enter Second string :    ");
    //scanf("%[^\n]s",&str2);
    gets(str2);
    int size1=0;
    int k1=0;
    while(str1[k1]!='\0')
    {
      size1++;
      k1++;
    }
    int size2=0;
    int k2=0;
    while(str2[k2]!='\0')
    {
      size2++;
      k2++;
    }

    int m=0;
    char rem[size2];
    int j=0;
    for(int i=1;i<size1;i++)
    {
        if(str2[j]==str1[i])
        {
            rem[m]=str1[i];
            m++;
            j++;
        }
        if(i==size1-1)
        {
            rem[m]=str2[j];
            m++;
            i=0;
            j++;
        }

    }
    int x=1;
    int p=0;
    int y=0;
    for(int i=1;i<=m;i++)
    {
        if(str2[p]==rem[i])
        {
            int temp=rem[y];
            rem[y]=rem[i];
            rem[i]=temp;
            y++;
            p++;
        }        
    }
    //puts(rem);
    printf("%s",rem);
    return 0;

}
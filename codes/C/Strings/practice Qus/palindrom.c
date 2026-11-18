#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];    
    puts("enter a string :  ");
    scanf("%[^\n]s",str);
    int size=0;
    int k=0;
    while(str[k]!='\0')
    {
      size++;
      k++;
    }
    int p=0;
    for(int i=0,j=size-1;i<size,j>=0;i++,j--)
    {
      if(str[i]==str[j])
      {
        p++;
      }
    }
    if(p==size)
    {
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}
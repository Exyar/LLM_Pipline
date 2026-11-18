#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    puts("enter a string :  ");
    scanf("%[^\n]s",str);
    puts("the reverse is : "); // automatically gives \n in outputs
    // for reverse
    int size=0;
    int k=0;
    while(str[k]!='\0')
    {
      size++;
      k++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
      char swap= str[i];
      str[i]=str[j];
      str[j]=swap;
    }
    puts(str);
    return 0;
}
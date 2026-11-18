#include<stdio.h>
#include<string.h>
int main()
{
    char str[25];
    puts("enter sentence: ");
    gets(str);
    int size=0;
    int k=0;
    while(str[k]!='\0')
    {
      size++;
      k++;
    }
    int v=0;
    int c=0;
    int n=0;
    int s=0;
    int q;
    for(int i=0;i<size;i++)
    {
        q=(int)str[i];
        if(q>=65 && q<=90 || q>=97 && q<=122)
        {
           if(q==65 || q==69 || q==73 || q==79 || q==85 || q==97 || q==101 || q==105|| q==111||q==117)
           {
            v++;
           }
           else{
            c++;
           }
        }
        if(q==32)
        {
            s++;
        }
       if(q>=48 && q<=57)
       {
        n++;
       }
    }
    printf("vowels %d \n consonent %d \n space %d \n numbers %d",v,c,s,n);

}
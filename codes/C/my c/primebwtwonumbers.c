#include<stdio.h>
int pbn(int,int);
void main()
{
  int i,j,r;
  printf("enter a no:  ");
  scanf("%d",&i);
  printf("enter a no:  ");
  scanf("%d",&j);
  if(j>i)
  {
    for(int a=i;a<=j;a++)
    {
      for(int k=2;k<a;k++)
      {
        r=a%k;
        if(r==0)
        {
          k=a+1;
        }
      }
      if(r!=0)
      {
        printf("%d\n",a);
      }
    }
  }
  if(i>j)
  {
    for(int a=j;a<=i;a++)
    {
      for(int k=2;k<a;k++)
      {
        int r=a%k;
        if(r==0)
        {
          k=a+1;
        }
      }
      if(r!=0)
      {
        printf("%d\n",a);
      }
    }
  }
  
}
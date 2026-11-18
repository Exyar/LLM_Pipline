#include<stdio.h>
void main()
{
  int i,j,k;
  printf("enter a num:  ");
  scanf("%d",&i);
  for(k=2;k<i;)
  {
    j=i%k;
    if(j==0)
    {
      printf("not prime");
      k=i+1;
    }
    else
    {
      k++;
      if(k==i)
      {
        printf("prime");
      }
    }
  }
}
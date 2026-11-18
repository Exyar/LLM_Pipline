#include<stdio.h>
int strg (int);
void main()
{
  int i,s;
  printf("enter npo:  ");
  scanf("%d",&i);
  s=strg(i);
                                  //printf("\ns = %d",s);
  if(s==i)
  {
    printf("\nit is a strong num");
  }
  else
  {
    printf("\nno it is not a storng no");
  }
}
int strg(int x) 
{
  int fact;
  int sum=0;
  for(int j=1;j<=x;x=x/10)
  {
    fact=x%10;
    int f=fact;                            //printf("\nhi!  fact = %d",fact);
    if(fact==1||fact==0)
      {
      f=1;
      }
    else
    {
      for(int k=1;k<fact;k++)
      {
      f=f*k;
                                // printf("\nfact =  %d",fact);
      }
    }
    sum=sum+f;
  }
                                //printf(" sum = %d\n",sum);
  return sum;
}
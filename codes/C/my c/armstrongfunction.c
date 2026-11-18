#include<stdio.h>
int arm (int x);
void main()
{
  int i,a;
  printf("enter a no:   ");
  scanf("%d",&i);
  a=arm(i);
  if(a==i)
  {
    printf("it is armstrong");
  }
  else
  {
    printf("it is not armstrong");
  }
}
int arm (int x)
{
  int sum=0;
  for(int j=0;j<x;x=x/10)
  {
    sum=((x%10)*(x%10)*(x%10))+sum;
  }
  return sum;
}
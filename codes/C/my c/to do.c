#include<stdio.h>
int fabo (int x);
void main ()
{
  int i,f;
  printf("enter a no:  ");
  scanf("%d",&i);
  f=fabo(i);
  printf("%d",f);
}
int fabo (int x)
{
  int b=0;
  int a=1;
  int num=0;
  for(int j=0;j<x;j++)
  {
    b=a+b;
    a=b-a;
    num=num*10+b;
  }
  return num;
}
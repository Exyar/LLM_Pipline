#include<stdio.h>
void fabo (int x);
void main ()
{
  int i,f;
  printf("enter a no:  ");
  scanf("%d",&i);
  fabo(i);
}
void fabo (int x)
{
  int b=0;
  int a=1;
  for(int j=0;j<x;j++)
  {
    b=a+b;
    a=b-a;
    printf("%d",b);
  }
  
}
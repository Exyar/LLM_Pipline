#include<stdio.h>
void print(int);
void main()
{
  int n;
  printf("Enter end number :   ");
  scanf("%d",&n);
  print(n);
}
void print(int x)
{
  if(x==0)
  {
    return;
  }
  printf("%d",x);
  print(x-1);
}
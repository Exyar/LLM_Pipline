#include<stdio.h>
void main()
{
  int x=10;
  int *p;
  p=&x;
  printf("Enter a no. :   ");
  scanf("%d",p);
  printf("%d",x);
}
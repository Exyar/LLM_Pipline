#include<stdio.h>
void main()
{
  int mul=1,i;
  printf("enter no ");
  scanf("%d",&i);
  for(int j=1;j<=i;j++)
  {
    mul=mul*j;
  }
  printf("%d",mul);
}
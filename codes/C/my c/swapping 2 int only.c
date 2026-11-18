#include<stdio.h>
void main()
{
  int i,j;
  printf("no:");
  scanf("%d",&i);
  printf("no:");
  scanf("%d",&j);
  i=i+j;
  j=i-j;
  i=i-j;
  printf("%d\n",i);
  printf("%d\n",j);
}
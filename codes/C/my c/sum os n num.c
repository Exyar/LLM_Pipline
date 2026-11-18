#include<stdio.h>
void main()
{
  int sum=0,i;
  printf("enter no:");
  scanf("%d",&i);
  for(int j=1;j<=i;j++)
  {
    sum=sum+j;
  }
  printf("%d",sum);

}
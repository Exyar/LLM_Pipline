#include<stdio.h>
void main()
{
  int sum=0;
    int arr[5];
  for(int i=0;i<=4;i++)
{
  printf("enter a no:");
  scanf("%d",&arr[i]);
}
for(int j=0;j<=4;j++)
{
  sum=sum+arr[j];
}
printf("%d",sum);
}
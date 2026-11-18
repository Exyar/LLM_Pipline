#include<stdio.h>
void main()
{
  int arr[5];
  for(int i=0;i<=4;i++)
{
  printf("enter a no:");
  scanf("%d",&arr[i]);
}
int max=arr[0];
for(int j=0;j<=4;j++)
{
  if(arr[j]>max)
  {
    max=arr[j];
  }
}
  printf("%d",max);
}
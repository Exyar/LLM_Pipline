#include<stdio.h>
void main()
{
  int n;
   printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
  int sum=0;
  int maxsum=-22222222;
  for(int i=0;i<n;i++)
  {
    sum=sum+arr[i];
    if(maxsum<sum)
    {
      maxsum=sum;
    }
    if(sum<0)
    {
      sum=0;
    }
  }
  printf("max sub array sum : %d",maxsum);
}
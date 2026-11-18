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
  int k;
  int sum=0;
  printf("length of sub array: ");
  scanf("%d",&k);
  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])
      {
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
      }
    }
  }
  for(int i=n-1;i>(n-1)-k;i--)
  {
    sum=sum+arr[i];
  }
  printf("%d",sum/k);
}
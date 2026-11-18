#include<stdio.h>
void main()
{
  int arr[10];
  for(int i=0;i<=9;i++)
  {
    printf("no:  ");
    scanf("%d",&arr[i]);
  }
  int max=arr[0];
  for(int i=0;i<=9;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  int arr1[10];
  for(int j=0,k=0;j<=9,k<=9;j++,k++)
  {
    arr1[k]=max-arr[j];
  }
  int min=arr1[0];
  for(int n=0;n<=9;n++)
  {
    if(arr1[n]<min && arr1[n]!=0)
    {
      min=arr1[n];
    }
  }
  if(min!=0)
  {
  int x=max-min;
  printf("sec largest num: %d",x);
  }
}
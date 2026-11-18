#include<stdio.h>
void main()
{
  int n;
  printf("Enter length of array :    ");
  scanf("%d",&n);
  int arr[n];
  //taking input
  for(int i=0;i<n;i++)
  {
    printf("Enter element :   ");
    scanf("%d",&arr[i]);
  }
  int max=arr[0];
  int min=arr[0];
  int M,m;
  m=1;
  M=1;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
      M=i+1;
    }
  } 
  printf("Max number = %d at position  %d",max,M);
  for(int i=0;i<n;i++)
  {
    if(arr[i]<min)
    {
      min=arr[i];
      m=i+1;
    }
  }
  printf("\nMin number = %d at position  %d",min,m);
}
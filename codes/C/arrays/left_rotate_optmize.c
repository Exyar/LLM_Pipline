#include<stdio.h>
//rotate the array left by 3
void main()
{
  int arr[10];
  int i,j;
  int n=10;
  int k=3;
  for(int p=0;p<=9;p++)
  {
    printf("Enter element:  ");
    scanf("%d",&arr[p]);
  }
  for(int r=1;r<=k;r++)
  {
    int first=arr[0];
    for(i=0;i<n-1;i++)
    {
      arr[i]=arr[i+1];
    }
    arr[n-1]=first;
  }
  for(i=0;i<n;i++)
  {
    printf("\n   %d",arr[i]);
  }
}
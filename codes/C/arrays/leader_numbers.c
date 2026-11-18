#include<stdio.h>
void main()
{
  int n;
  int m=0;
  //k=0;
  printf("Enter length of array :   ");
  scanf("%d",&n);
  int arr[n];
  
 for(int i=0;i<n;i++)
 {
  printf("Enter elements :   ");
  scanf("%d",&arr[i]);
 }
 //code
 for(int i=n-1;i>=0;i--)
 {
  int k=0;
  for(int j=i;j<n;j++)
  {
    //int k=0;
    if(arr[i]>arr[j])
    {
      k=k+1;
      m=k;
    }
  }
  if(k==((n-1)-i))
  {
    printf("\t%d",arr[i]);
  }
 }
 //printf("\n%d",arr[n-1]);
 }
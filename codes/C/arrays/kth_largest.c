#include<stdio.h>
void main()
{
  int n,k;
  
  printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
  printf("largest term you want:  ");
  scanf("%d",&k);
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]<arr[j])
      {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("asked value is : %d",arr[k-1]);
  for(int i=0;i<n;i++)
  {
    printf("\n%d",arr[i]);
  }
}
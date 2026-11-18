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
  for(int i=0;i<n-1;i++)
  {
    if(arr[i+1]!=arr[i]+1)
    {
      printf("\nmissing no is: %d",(arr[i]+1));
    }
  }
}

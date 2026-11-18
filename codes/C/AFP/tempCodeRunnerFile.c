#include<stdio.h>
int *bubble(int*b,int);
void main()
{
  int n;
  printf("Enter the length of array :    ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("Enter element :   ");
    scanf("%d",&arr[i]);
  }
  int*b=bubble(arr,n);
  for(int i=0;i<n;i++)
  {
    printf("%d",*(b+i));
  }
}  
int *bubble(int*b,int x)
{
  int count = 0;
   for(int i=0;i<x-1;i++)
   {
    for(int j=0;j<x-1;j++)
    {
      if(*(b+j)>*(b+j+1))
      {
        int temp = *(b+j);
        *(b+j) = *(b+j+1);
        *(b+j+1) = temp;
        count=1;  
      }
    }
    if(count==0)
   {
      printf("already sorted");
      break;
   }
   }
   return b;
}
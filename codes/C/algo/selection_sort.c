//Selection Sort
#include<stdio.h>

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

  //code
  int min=arr[0];
  for(int i=0;i<n;i++)
  {
    //int min=arr[i];
    for(int j=i+1;j<n;j++)
    {
      if(min>arr[j])
      {
        int temp = min;
        min=arr[j];
        arr[j]=temp;

      }
    }
    arr[i]=min;
    min=arr[i+1];
  }
  for(int i=0;i<n;i++)
  {
    printf("\t%d",arr[i]);
  }
}
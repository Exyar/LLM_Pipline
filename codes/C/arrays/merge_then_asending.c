#include<stdio.h>
void main()
{
  int arr1[5];
  int arr2[5];
  int arr[10];
  for(int i=0;i<=4;i++)
  {
    printf("Enter Element :   ");
    scanf("%d",&arr1[i]);
  }
  for(int i=0;i<=4;i++)
  {
    printf("\n\tEnter Element of second :   ");
    scanf("%d",&arr2[i]);
  }
  for(int i=0,j=0;i<=4,j<=4;i++,j++)
  {
    arr[j]=arr1[i];
  }
   for(int k=0,j=5;k<=4,j<=9;k++,j++)
  {
    arr[j]=arr2[k];
  }
  for(int i=0;i<9;i++)
  {
    for(int j=i+1;j<10;j++)
    {
      if(arr[i]<arr[j])
      {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  for(int i=0;i<10;i++)
  {
    printf("\n%d",arr[9 -i]);
  }
}
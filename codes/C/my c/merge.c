#include<stdio.h>
void main()
{
  int arr1[5];
  int arr2[5];
  int arr3[10];
  for(int i=0;i<=4;i++)
  {
    printf("enter a no:  ");
    scanf("%d",&arr1[i]);
  }
  for(int i=0;i<=4;i++)
  {
    printf("enter a no:  ");
    scanf("%d",&arr2[i]);
  }
  for(int i=0, j=0;i<=4,j<=4;i++,j++)
  {
    arr3[j]=arr1[i];
  }
  for(int k=0, l=5;k<=4,l<=9;k++,l++)
  {
    arr3[l]=arr2[k];
  }
  for(int i=0;i<=9;i++)
  {
    printf(" \n%d ",arr3[i]);
  }
}
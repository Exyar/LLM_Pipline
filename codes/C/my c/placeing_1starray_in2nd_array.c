#include<stdio.h>
void main()
{
  int arr1[10];
  int arr2[10];
  for(int i=0;i<=9;i++)
  {
    printf("enter a no:  ");
    scanf("%d",&arr1[i]);
  }
  int i,j;
  for( i=0,j=0;i<=9,j<=9;i++,j++)
  {
    //int k=arr1[i];
    arr2[j]=arr1[i];
  }
  for(int j=0;j<=9;j++)
  {
    printf("%d",arr2[j]);
  }
}
#include<stdio.h>
void rotate(int *r,int);
void main()
{
  int n;
  printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  int arrc[n];
  int *ptr;
  ptr=arr;
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&ptr[i]);
  }
  rotate(arr,n);
  for(int i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
}
void rotate(int*r,int x)
{
  int m;
  printf("how many rotations:  ");
  scanf("%d",&m);
  for(int i=0;i<m;i++)
  {
    int temp=*(r+0);
    for(int j=0;j<x-1;j++)
    {
      *(r+j)=*(r+j+1);
    }
    *(r+x-1)=temp;
  }
  
}
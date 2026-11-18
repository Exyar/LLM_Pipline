#include<stdio.h>
void copy(int *a,int *c,int );
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
  copy(arr,arrc,n);
  for(int i=0;i<n;i++)
  {
    printf("%d",arrc[i]);
  }
  
}
void copy(int *a,int *c,int x)
{
  for(int i=0;i<x;i++)
  {
    *(c+i)=*(a+i);
  }
}
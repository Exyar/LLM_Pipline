#include<stdio.h>
int majority(int*m,int );
void main()
{
  int n;
  printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  int *ptr;
  ptr=arr;
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&ptr[i]);
  }
  int m=majority(arr,n);
  printf("%d",m);
}

int majority(int*m,int x)
{
  int count=0;
  int candidate=*(m+0);
  for(int i=0;i<x;i++)
  {
    if(*(m+i)==candidate)
    {
      count++;
    }
    else
    {
      count--;
    }
    if(count<0)
    {
      candidate=*(m+i);
      count=0;
    }
  }
  return candidate;
}
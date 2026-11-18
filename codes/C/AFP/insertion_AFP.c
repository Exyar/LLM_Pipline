#include<stdio.h>
int* insertion(int*,int);
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
  int*i=insertion(arr,n);
  for(int j=0;j<n;j++)
  {
    printf("%d",*(i+j));
  }
}

int* insertion(int* t,int x)
{
  for(int i=1;i<x;i++)
  {
    int key=*(t+i);
    int j=i-1;
    while(j>=0 && *(t+j)>key)
    {
      *(t+j+1)=*(t+j);
      j--;
    }
    *(t+j+1)=key;
  }
  return t;
}
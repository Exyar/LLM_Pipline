#include<stdio.h>
void addbtwo(int *a,int );
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
   addbtwo(arr,n);
 
}
 void addbtwo(int *a,int x)
{
 for(int i=0;i<x;i++)
 {
  *(a+i)=*(a+i)+2;
  printf("%d",*(a+i));
 }
}
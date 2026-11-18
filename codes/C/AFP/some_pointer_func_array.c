#include<stdio.h>
int average(int *p,int);
int sumation(int *s,int);
int multi(int *m,int);
void reverse(int *r,int);
int *asend(int *a,int);
int kth(int *k,int);
void main()
{
  int n,i;
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
  printf("enter no for oparation: \n1 for avg \n 2 for add \n 3 for multiply \n 4 to reverse \n 5 to asscend arr \n 6 to kth largest element");
  scanf("%d",&i);
  if(i==1)
  {
    int avg=average(arr,n);
    printf("%d",avg);
  }
  if(i==2)
  {
    int sum=sumation(arr,n);
    printf("%d",sum);
  }
  if(i==3)
  {
    int mul=multi(arr,n);
    printf("%d",mul);
  }
  if(i==4)
  {
    reverse(arr,n);
  }
  if(i==5)
  {
      int *as=asend(arr,n);
     
     for(int i=0;i<n;i++)
     {
      printf("%d",as[i]);
     }
  }
  if(i==6)
  {
    int max=kth(arr,n);
    printf("%d",max);
  }
}

int average(int*p,int x)
{
  int sum=0;
  for(int i=0;i<x;i++)
  {
    sum=sum + p[i];
  }
  int avg=sum/x;
  return avg;
}
int sumation(int *s,int x)
{
  int sum=0;
  for(int i=0;i<x;i++)
  {
    sum=sum + s[i];
  }
  return sum;
}
int multi(int *m,int x)
{
  int mul=1;
  for (int i=0;i<x;i++)
  {
    mul=mul*m[i];
  }
  return mul;
}
void reverse(int *r,int x)
{
  for(int i=x-1;i>=0;i--)
  {
    printf("%d",r[i]);
  }
}
int *asend(int *a,int x)
{
  for(int i=0;i<x;i++)
  {
    for(int j=0;j<x;j++)
    {
      if(a[i]<a[j])
      { 
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  return a;
}
int kth(int *k,int x)
{
  int v;
  printf("which largest you wnat");
  scanf("%d",&v);
  for(int i=0;i<x;i++)
  {
    for(int j=0;j<x;j++)
    {
      if(k[i]<k[j])
      {
        int temp=k[i];
        k[i]=k[j];
        k[j]=temp;
      }
    }
  }
  int o=k[x-v];
  return o;
}
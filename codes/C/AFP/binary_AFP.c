#include<stdio.h>
int binary(int*b,int ,int);
int main()
{
 int n,p;
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
  printf("enter to search: ");
  scanf("%d",&p);
  int f=binary(arr,n,p);
  if(f==1)
  {
    printf("found");
  }
  if(f==0 )
  {
    printf("not found");
  }
  return 0;
}

int binary(int*b,int x,int y)
{
  int found=0;
  int st=0;
  int end=x-1;
  int mid=(st+end)/2;
  while(st<=end)
  {
    if(*(b+mid)>y)
    {
      end=mid-1;
      mid=(st+end)/2;
    }
    if(*(b+mid)<y)
    {
      st=mid+1;
      mid=(st+end)/2;
    }
    if(*(b+mid)==y)
    {
      found=1;
      break;
    }
  }
  return found;
}
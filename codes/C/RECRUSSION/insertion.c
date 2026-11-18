#include<stdio.h>
int *insertion(int *a,int n,int x,int y,int key)
{
    if(x==n)
        return a;
    if(y<0 && a[y]<=key)
        return a;
    a[y+1]=a[y];
    y--;
    int*t=insertion(a,n,x,y,key);
    a[y+1]=key;
    x++;
    key=a[x];
    t=insertion(a,n,x,x-1,key);
    return t;
}
int main()
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
  int*i=insertion(arr,n,1,0,arr[1]);
  for(int j=0;j<n;j++)
  {
    printf("%d",i[j]);
  }
  return 0;
}
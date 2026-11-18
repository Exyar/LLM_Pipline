#include<stdio.h>
int *merge(int *a,int *b,int*c,int ,int);
void main()
{
  int n,m;
  printf("length of array:  ");
  scanf("%d",&n);
  int arra[n];
  int *ptra;
  ptra=arra;
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&ptra[i]);
  }
  

  printf("length of array:  ");
  scanf("%d",&m);
  int arrb[m];
  int *ptrb;
  ptrb=arrb;
  for(int i=0;i<m;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&ptrb[i]);
  }


  int ar[n+m];
  int *arr=merge(arra,arrb,ar,n,m);
  for(int i=0;i<n+m;i++)
  {
    printf("%d ",arr[i]);
   
  }
}

int *merge(int *a,int *b,int*c,int x,int y)
{
  // int ar[x+y];
  for(int i=0;i<x;i++)
  {
    c[i]=a[i];
  }
  for(int i=x,j=0;i<x+y,j<y;i++,j++)
  {
    c[i]=b[j];
  }
  return c;
}
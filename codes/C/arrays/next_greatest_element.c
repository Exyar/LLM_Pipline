#include <stdio.h>
void main()
{
  int n;
  printf("length of array:  ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("enter elements:  ");
    scanf("%d", &arr[i]);
  }
  int k=0;
  int m=arr[0];

  for(int i=0;i<n;i++)
  {
    int c=0;
    if(m<arr[i])
    {
      printf("\t%d",arr[i]);
      k++;
      m=arr[k];
      i=k;
      c=1;
    }
    if(i==n-1 && m!=arr[n-1] && c==0)
    {
      k++;
      i=k;
      m=arr[k];
    }
  }
  printf("\t-1");
}
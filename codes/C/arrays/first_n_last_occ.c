#include<stdio.h>
void main()
{
  int n,p,m,k=0;
   printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
  printf("enter no to find occ:  ");
  scanf("%d",&p);
  for(int i=0;i<n;i++)
  {
    if(arr[i]==p)
    {
      m=i+1;
      k++;
      if(k==1)
      {
        printf("first occ at: %d",m);
      }
    }
  }
  printf("/nlast occ at : %d",m);
}
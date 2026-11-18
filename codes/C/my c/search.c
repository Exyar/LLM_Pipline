#include<stdio.h>
void main()
{
  int n , count;
  count=0;
  int arr[10];
  for(int i=0;i<=9;i++)
  {
    printf("enter a no:  ");
    scanf("%d",&arr[i]);
  }
  printf("enter no that you want:  ");
  scanf("%d",&n);
  for(int j=0;j<=9;j++)
  {
    if(arr[j]==n)
    {
    printf("\nfound");
    int k=j+1;
    printf("\nfound at %d position",k);
    count++;
    }
  }
  if(count==0)
  {
    printf("\nNOT FOUND");
  }
}
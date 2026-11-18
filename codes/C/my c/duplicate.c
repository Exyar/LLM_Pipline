#include<stdio.h>
void main()
{
  int arr[10];
  for(int i=0;i<=9;i++)
  {
    printf("enter a no:  ");
    scanf("%d",&arr[i]);
  }
  int c=0;
  for(int i=0; i<=9;i++)
  {
    for(int j=0;j<=9;j++)
    {
      int k=arr[i]%arr[j];
      if(k==0 && j==i)
      {
        int c=c+1;
        printf("\nno is: %d \n and\n no of time it is repeting: %d",arr[i],c);
      }
    }
  }
}
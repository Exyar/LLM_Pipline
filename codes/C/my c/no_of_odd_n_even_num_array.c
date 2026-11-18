#include<stdio.h>
void main()
{
  int k=0;
  int p=0;
  int arr[10];
  for(int i=0;i<=9;i++)
  {
    printf("enter a no:  ");
    scanf("%d",&arr[i]);
  }
  for(int j=0;j<=9;j++)
  {
    int e=arr[j]%2;
    if(e==0)
    {
      k=k+1;
      printf("\nEVEN :  %d",arr[j]);
      
    }
    
  }
  for(int j=0;j<=9;j++)
  {
    int o=arr[j]%2;
    if(o!=0)
    {
      p=p+1;
      printf("\nODD :  %d",arr[j]);
    }
  }
  printf("\n%d",k);
  printf("\n%d",p);
}
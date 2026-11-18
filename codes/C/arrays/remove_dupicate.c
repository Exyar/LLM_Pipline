#include<stdio.h>
void main()
{
  int n;
  printf("Enter length of array :    ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("Enter element :   ");
    scanf("%d",&arr[i]);
  }
  //int count=1;
  for(int i=0;i<n;i++)
  {
    int count =1;
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
      count++;
      }
    } 
    if(count!=0)
    {
      printf("\t%d",arr[i+count-1]);
      i=i+count-1;
    }
    else
    {
      printf("\t%d",arr[i]);
    }
  }
}
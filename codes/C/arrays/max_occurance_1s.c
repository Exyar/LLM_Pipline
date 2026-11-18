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

  //code
  int max_count=0;
  int count=0;

  for(int i=0;i<n;i++)
  {
    if(arr[i]==1)
    {
      count++;
    }
    else
    {
      count=0;
    }
    if(max_count<count)
    {
      max_count=count;
    }
  }
  printf("\nTotal occurance :  %d",max_count);
}
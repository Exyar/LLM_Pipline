#include<stdio.h>
void main()
{
  int arr1[7];
  int arr2[7];
  int k=0;
  for(int i=0;i<=6;i++)
  {
    printf("Enter Element :   ");
    scanf("%d",&arr1[i]);
  }
  for(int i=0;i<=6;i++)
  {
    printf("\n\tEnter Element of second :   ");
    scanf("%d",&arr2[i]);
  }
  for(int i=0;i<=6;i++)
  {
    for(int j=0;j<=6;j++)
    {
      if(arr1[i]==arr2[j])
      {
        printf("\nCommon element :  %d",arr1[i]);
        k=1;
      }
    }
  }
  if(k==0)
  {
    printf("NO COMMON");
  }
}
#include<stdio.h>
void main()
{
  int arr[10];
  int i,j,k;
  for(i=0;i<=9;i++)
  {
    printf("Enter Element :   ");
    scanf("%d",&arr[i]);
  }
  for(i=0;i<=9;i++)
  {
    for(j=i+1;j<=9;j++)
    {
      if(arr[j]<arr[i])
      {
        printf("NOT IN ASCENDING ORDER");
        i=10;
        j=10;
      }
      
    }
    if(i==9)
    printf("ASCENDING");
  }
}
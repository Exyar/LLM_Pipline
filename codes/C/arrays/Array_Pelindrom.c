#include<stdio.h>
void main()
{
  int arr[10];

  int k=0;
  for(int m=0;m<=9;m++)
  {
    printf("Enter element :   ");
    scanf("%d",&arr[m]);
  }
  for(int i=0;i<=4; i++)
  {
    if(arr[i]==arr[9-i])
    {
        k=k+1;
    }
  }
  if(k==5)
  {
    printf("\nPELINDROM");
  }
  else
  {
    printf("NOT");
  }
}
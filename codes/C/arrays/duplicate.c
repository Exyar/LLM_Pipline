#include<stdio.h>
void main()
{
  int arr[10];
  for(int i=0;i<=9;i++)
  {
    printf("no:");
    scanf("%d",&arr[i]);
  }
  int k;
  for(int i =0;i<=9;i++)
  { 
    k=1;
    for(int j=i+1;j<=9;j++)
    {
      if(arr[i]==arr[j])
      {
        k=k+1;
      }
    }
    if(k>0)
    printf("\nNum is: %d",arr[i]);
    printf("\nrepeated %d times",(k));
  }
}
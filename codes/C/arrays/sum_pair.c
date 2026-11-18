#include<stdio.h>
void main()
{
  int arr[10];
  int i,j,n;
  for(i=0;i<=9;i++)
  {
    printf("Enter elements :   ");
    scanf("%d",&arr[i]);
  }
  printf("Enter addition :   ");
  scanf("%d",&n);
  for(i=0;i<=9;i++)
  {
    for(j=0;j<=9;j++)
    {
      if(arr[j]+arr[i]==n)
      {
        printf("%d  %d",arr[j],arr[i]);
      }
    }
  }

}
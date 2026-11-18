#include<stdio.h>
void main()
{
  int arr[10];
  int n;
  for(int i=0;i<=9;i++)
  {
    printf("no: ");
    scanf("%d",&arr[i]);
  }
  printf("how many rotation you want:  ");
  scanf("%d",&n);
  for(int r=0;r<n;r++)
  {
     int k=arr[9];
    for(int j=8;j>=0;j--)
    {
      arr[j+1]=arr[j];
    }
   arr[0]=k;
  }
  for(int i=0;i<=9;i++)
  {
    printf("%d ",arr[i]);
  }
 
}
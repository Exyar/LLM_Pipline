#include<stdio.h>
void main()
{
  int arr[10];
  for(int i=0;i<=9;i++)
  {
    printf("no:");
    scanf("%d",&arr[i]);
  }
  int max_count=0;
  int mode=arr[0];
  for(int i =0;i<=9;i++)
  { 
    int count =0;
    for(int j=i+1;j<=9;j++)    // or j=0
    {
      if(arr[i]==arr[j])
      {
        count++;
      }
    }
    if(count>max_count)
    {
      max_count=count;
      mode=arr[i];
    }
  }
  printf("mode = %d",mode);
}
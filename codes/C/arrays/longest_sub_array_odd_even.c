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

  int count=1;
  int max_len=1;

  for(int i=1;i<n;i++)
  {
    if(arr[i]%2==0 && arr[i-1]%2 !=0  ||  arr[i]%2 !=0 && arr[i-1]%2 == 0)
    {
      count++;
      if(count>max_len)
      {
        max_len=count;
      }
      
    }
    else
      {
        count=1;
      }
  }
  printf("LONGEST SUB ARRAY ( EVEN - ODD)%d",max_len);
}
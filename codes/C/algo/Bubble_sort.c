// bubble sort

#include<stdio.h>
void main()
{
  int n;
  printf("Enter the length of array :    ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("Enter element :   ");
    scanf("%d",&arr[i]);
  }
   int count = 0;
   for(int i=0;i<n-1;i++)
   {
    //int count=0;
    for(int j=0;j<n-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        count=1;  
      }
    }
    if(count==0)
   {
      printf("Soreted, you entered");
      break;
   }
   }
   
   for(int i=0;i<n;i++)
   {
    printf("\t%d",arr[i]);
   }
}


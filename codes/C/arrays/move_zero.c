#include<stdio.h>
void main()
{
  int n;
  printf("Enter length of array :    ");
  scanf("%d",&n);
  int arr[n];
  //taking input
  for(int i=0;i<n;i++)
  {
    printf("Enter element :   ");
    scanf("%d",&arr[i]);
  }

//mine
  //logic
  for(int i=0;i<n;i++)
  {
    if(arr[i]==0)
    {
      for(int j=i;j<n-1;j++)
      {
        arr[j]=arr[j+1];
      }
      arr[n-1]=0;
    }
  }
  //output
  for(int m=0;m<n;m++)
  {
    printf("\t%d  ",arr[m]);
  }  
  
  
//chatgpt
  /* int j=0;
 for(int i=0;i<n;i++)
 {
  if(arr[i]!=0)
  {
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    j++;
  }
 }
 for(int i=0;i<n;i++)
 {
  printf("\t%d",arr[i]);
 } */
}
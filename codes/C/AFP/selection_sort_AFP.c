#include<stdio.h>
int* selection(int*,int);
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
  int* s=selection(arr,n);
  for(int i=0;i<n;i++)
  {
   printf("%d",*(s+i));
  }
 //printf("%d",*s);
}

int* selection(int* s,int x)
{
   int min=*(s+0);
  for(int i=0;i<x;i++)
  {
    for(int j=i+1;j<x;j++)
    {
      if(min>*(s+j))
      {
        int temp = min;
        min=*(s+j);
        *(s+j)=temp;
      }
    }
    *(s+i)=min;
    min=*(s+i+1);
  }
  return s;
}

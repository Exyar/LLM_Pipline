#include<stdio.h>
void main()
{
  int n;
  int p;
  int k=0;
  printf("Enter length of array :   ");
  scanf("%d",&n);
  int arr[n];
  
 for(int i=0;i<n;i++)
 {
  printf("Enter elements :   ");
  scanf("%d",&arr[i]);
 }
 
 printf("Enter the element to search :    ");
 scanf("%d",&p);

 // ascending order code
 for( int i=0;i<n;i++)
 {
    for( int j=1;j<n;j++)
    {
      if(arr[j-1]>arr[j])
      {
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
      }
    }
 }
 
  // code of binary
 int st=0;
 int end=n;
 int mid=(st+end)/2;

 for(int i=st;st!=end;)
 {
  if(arr[mid]<p)
  {
    st=mid;
    mid=(st+end)/2;
  }
  else
  {
    if(arr[mid]==p)
    {
      printf("\nFOUND");
      k++;
      break;
    }
    end=mid;
    mid=(st+end)/2;
  }
 }
 if(k==0)
 {
  printf("\nNOT FOUND");
 }
}
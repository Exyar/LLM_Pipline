#include<stdio.h>
void main()
{
  int n,k;
  int p=0;
  int arr1[n];
   printf("Enter length of array :   ");
  scanf("%d",&n);
  int arr[n];
  
 for(int i=0;i<n;i++)
 {
  printf("Enter elements :   ");
  scanf("%d",&arr[i]);
 }
 printf("num of rotation");
 scanf("%d",&k);
 for(int i=0;i<k;i++)
 {
  int last=arr[n-1];
  for(int j=n-1;j>0;j--)
  {
    arr[j]=arr[j-1];
  }
  arr[0]=last;
 }
 for(int i=0;i<n;i++)
 {
  printf("%d",arr[i]);
 }
}


// chatgpt
/*
int temp[n];
for(int i=0;i<n;i++)
 { 
   temp[(i+k)%n] =arr[i];
 } 
*/
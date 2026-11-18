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
 for(int i=0;i<n;i++)
 {
  if(arr[i]==p)
  {
    printf("Fpund");
    i=n+1;
    k++;
  }
 }
 if(k==0)
 {
  printf("Not");
 }
}
#include<stdio.h>
void main()
{
  int m,n;
  printf("Enter length of First array :    ");
  scanf("%d",&n);
  int arr1[n];
  //taking input
  printf("Enter Elemets in First Array\n");
  for(int i=0;i<n;i++)
  {
    printf("Enter element :   ");
    scanf("%d",&arr1[i]);
  }
  printf("\nEnter the length of second array :   ");
  scanf("%d",&m);
  int arr2[m];
  printf("Enter Elements in Second Array\n");
  for(int i=0;i<m;i++)
  {
    printf("Enter element :   ");
    scanf("%d",&arr2[i]);
  }
  
  if(n>m)
  {
    for(int i=0;i<n;i++)
    {
      printf("\t%d",arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
      int count=0;
      for(int j=0;j<n;j++)
      {
        if(arr2[i]==arr1[j])
        {
          count++;
        }
      }
      if(count==0)
      {
        printf("\t%d",arr2[i]);
      }
    }
  }

  if(m>n)
  {
    for(int i=0;i<m;i++)
    {
      printf("\t%d",arr2[i]);
    }
    for(int i=0;i<n;i++)
    {
      int count=0;
      for(int j=0;j<m;j++)
      {
        if(arr1[i]==arr2[j])
        {
          count++;
        }
      }
      if(count==0)
      {
        printf("\t%d",arr1[i]);
      }
    }
  }
 
}
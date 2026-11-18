/* #include<stdio.h>
void main()
{
  int n;
  printf("Enter no of element (Length of array):    ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("Enter element :   ");
    scanf("%d",&arr[i]);
  }
  int p;
  printf("Enter largest number's Rank : ");
  scanf("%d",&p);

  int max = arr[0];
  for(int i=0;i<=9;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }
  }
  int arr1[n];
  for(int j=0 , k=0;j<=n-1,k<=n-1;j++,k++)
  {
    arr1[k]=max-arr[j];
  }
  int min = arr1[0];
  int m;
  for(int j=0;j<p;j++)
  {
    for(int i=0;i<n-1;i++)
    {
      if(arr1[i]<min && arr1[i]!=0)
      {
        min = arr1[i];
        m=i;
      }
    }
    if(j<p-1)
    {
      arr1[m]=0;+++++++++++++++
    }
  }
  int x=max-min;
  printf("%d",x);
} */
#include<stdio.h>
void main ()
{
  int n;
  printf("Enter no of element (Length of array):    ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("Enter element :   ");
    scanf("%d",&arr[i]);
  }
  
  for(int i=0;i<=n-1;i++)
  {
    for(int j=i+1;j<=n-1;j++)
    {
      if(arr[j]>arr[i])
      {
        arr[j]=arr[i];
      }
      
    }
    
  }
  for(int i=0;i<=9;i++)
  {
    printf("%d ",arr[i]);
  }
}
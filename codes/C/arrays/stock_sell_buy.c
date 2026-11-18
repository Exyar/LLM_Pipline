#include<stdio.h>
void main()
{
  int n;
  printf("Enter the length of array :   ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("Enter element : ");
    scanf("%d",&arr[i]);
  }
  int sell,buy;
  int profit=0;
  int max_pro=0;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      profit=arr[j]-arr[i];
      if(max_pro<profit && arr[i]<arr[j] && i<j)
      {
        max_pro=profit;
        buy=i;
        sell=j;
      }
    }
  }
  printf("\nMax profit = %d",max_pro);
  printf("\nBuy Day :  %d",buy+1);
  printf("\nSell day :  %d",sell+1);
}
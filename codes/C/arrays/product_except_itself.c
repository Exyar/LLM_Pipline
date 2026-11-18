#include <stdio.h>
void main()
{
  int n;
  printf("length of array:  ");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf("enter elements:  ");
    scanf("%d", &arr[i]);
  }
  int prod = 1;
  for (int i = 0; i < n; i++)
  {
    prod = prod * arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
    {
      int print = prod / arr[i];
      printf("\t%d", print);
    }
    else
    {
      int pro = 1;
      for (int j = 0; j < n; j++)
      {
        arr[i] = 1;
        pro = pro * arr[j];
      }
      arr[i] = 0;
      printf("\t%d", pro);
    }
  }
}
#include<stdio.h>
void main()
{
  int i,j,k;
  printf("enter 1st angle:  ");
  scanf("%d",&i);
  printf("enter 2nd angle:  ");
  scanf("%d",&j);
  printf("enter 3rd angle:  ");
  scanf("%d",&k);
  int sum = i+j+k;
     if(sum==180)
  {
    if(i==60 && j==60 && k==60)
     {
        printf("equi triangle");
     }
    else
    {
      if(i!=j && j!=k && k!=i)
      {
        printf("Scalene");
      }
      else
      {
        printf("Isosceles");
      }
    }
  }
    else
    {
      printf("Not the angles of a triangle");
    }
   
}

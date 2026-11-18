#include<stdio.h>
int lcm (int,int,int);
void main()
{
  int i,j,k,l;
  printf("enter no:   ");
  scanf("%d",&i);
  printf("enter no:   ");
  scanf("%d",&j);
  printf("enter no:   ");
  scanf("%d",&k);
  l=lcm(i,j,k);
  printf("lcm is: %d",l);
}
int lcm(int x,int y,int z)
{
  int i,j,k,l;
  int max=x;
  if(y>max)
  {
    max=y;
  }
  if(z>max)
  {
    max=z;
  }
  for( ; ; max++)
  {
    if(max%x==0 && max%y==0 && max%z==0)
    {
      return max;
    }
  }
}
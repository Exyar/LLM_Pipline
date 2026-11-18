#include<stdio.h>
int count (int x);
void main()
{
  int i,c;
  printf("enter no:  ");
  scanf("%d",&i);
  c=count(i);
  printf("%d",c);
}
int count(int x)
{
  int z=0;
  for(int j=1;j<=x;x=x/10)
  {
     z=z+1;
  }
  return z;
}
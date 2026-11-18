#include<stdio.h>
int sod (int);
void main()
{
  int i,s;
  printf("enter a no:  ");
  scanf("%d",&i);
  s=sod(i);
  printf("%d",s);
}
int sod (int x)
{
  int sum=0;
  for(int j=1;j<=x;x=x/10)
  {
     sum=(x%10)+sum;
  }
  return sum;
}
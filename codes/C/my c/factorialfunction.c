#include<stdio.h>
int fact (int x);
void main()
{
  int i,f;
  printf("enter a no:  ");
  scanf("%d",&i);
  f=fact(i);
  printf("%d",f);

}
int fact (int x)
{
  int fac=1;
  for(int j=1;j<=x;j++)
  {
    fac=fac*j;
  }
  return fac;
}
#include<stdio.h>
int fact(int);
int main()
{
  int n;
  printf("Enter number :   ");
  scanf("%d",&n);
  int r=fact(n);
  printf("%d",r);
  return 0;
}
int fact(int x)
{
 int f;
 if(x==1 || x==0 )
 {
  f=1;
  return f;
 }
 f=fact(x-1);
 f=f*x;
 return f;
}
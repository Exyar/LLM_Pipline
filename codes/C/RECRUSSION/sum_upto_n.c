#include<stdio.h>
int sum(int);
void main()
{
  int n;
  printf("Enter end number :   ");
  scanf("%d",&n);
  int r=sum(n);
  printf("%d",r);
}
int sum(int x)
{
 int s;
 if(x==0)
 {
  s=0;
  return s;
 }
 s=sum(x-1);
 s=s+x;
 return s;
}
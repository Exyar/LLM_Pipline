#include<stdio.h>
int exp(int,int);
void main()
{
  int base,power;
  printf("Enter base number :   ");
  scanf("%d",&base);
  printf("Enter power number :   ");
  scanf("%d",&power);
  int e=exp(base,power);
  printf("%d",e);
}
int exp(int b,int p)
{
 int m;
 if(p==0)
 {
  return 1;
 }
 /*if(p==1)
 {
  m=b;
  return m;
 }*/
 m=exp(b,p-1);
 m=m*b;
 return m;
}
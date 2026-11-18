#include<stdio.h>
int pld (int x);
void main()
{
  int i,p;
 printf("enter a no:  ");
 scanf("%d",&i);
 p=pld(i);
 if(p==i)
 {
  printf("yes it is pallindrom");
 }
 else
 {
  printf("not a pallindrom");
 }
}
int pld (int x)
{
  int pa=0;
  for(int j=0;j<x;x=x/10)
  {
    pa=(pa*10)+(x%10);
  }
  return pa;
}
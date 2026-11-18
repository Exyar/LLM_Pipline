#include<stdio.h>
int lcm (int*,int*);
void main ()
{
  int i,j,l;
  int*p,*q;
  p=&i;
  q=&j;
  
  printf("enter a no:   ");
  scanf("%d",p);
  printf("enter a no:   ");
  scanf("%d",q);
  l=lcm(&i,&j);
  printf("lcm is:  %d",l);
}
int lcm(int*x,int*y)
{
  int max=*x;
  if(*y>max)
  {
    max=*y;
  }
  for( ; ;max++)
  {
    if(max%*x==0 && max%*y==0)
    {
      return max;
    }
  }
}
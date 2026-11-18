#include<stdio.h>
void main()
{
  int i,j,k,l,m,n,o,p,q,r;
  printf("enter a no   ");
  scanf("%d",&i);
  if(i>999 && i<10000)
  {
    j=i%1000;
    k=j%100;
    l=k%10;

    m=(i-l)/10;
    n=m%100;
    o=n%10;
    
    p=(m-o)/10;
    q=p%10;
    r=(p-q)/10;

    printf("%d%d%d%d",l,o,q,r);
    //printf("hi");
  }
}
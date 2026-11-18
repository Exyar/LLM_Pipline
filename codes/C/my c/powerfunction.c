#include<stdio.h>
 int power (int x,int y);
 void main ()
 {
  int i,j,p,k;
  printf("enetr base:  ");
  scanf("%d",&i);
  printf("enetr power:  ");
  scanf("%d",&j);
  p=power(i,j);
  printf("%d",p);
 }
 int power (int x,int y)
 {
  int base=1;
  for(int pow=1;pow<y;pow++)
  {
    base=base*x;
  }
 int z=base*x;
  return z;
 }
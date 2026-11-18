 #include<stdio.h>
 int pri (int x);

 void main ()
 {
  int i,p;
  printf("enter a no:  ");
  scanf("%d",&i);
  p=pri(i);
  if(p==0)
  {
    printf("not a prime");
  }
  else
  {
    printf("yes it is  prime");
  }

 }
 int pri(int x)
 {
  int z;
  for(int j=2;j<x;j++)
  {
    z=x%j;
    if(z==0)
    {
      j=x+1;
    }
  }
  return z;
 }
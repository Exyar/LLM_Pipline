#include<stdio.h>
/*int gcd (int,int,int);
void main()
{
  int i,j,k,m,n,g;
  printf("Enter no. :     ");
  scanf("%d",&i);
  printf("Enter no. :     ");
  scanf("%d",&j);
  printf("Enter no.  :    ");
  scanf("%d",&k);
  
  g=gcd(i,j,k);
 
  printf("%d",g);

}  
int gcd (int x ,int y,int z)
{
  int k;
  int j,l;
 if(x>y)
 {
  for(int i=y ,  k=y;i<=1 , k<=1;i-- , k--)
  {
     j=x%i;
     l=y%k;
  
     if(j==0 && l==0 && j==l)
     {
     return i;
     }
  }
  
 }
 else
 {
  for(int i=x ,  k=x;i<=1 , k<=1;i-- , k--)
  {
     j=x%i;
     l=y%k;
  
     if(j==0 && j==l)
     {
     return i;
     }
  }
 }

}*/
int hcf(int,int,int);
void main()
{
   int i,j,k,m,n;
   i=50;
   j=75;
   k=125;
   for(m=2;m<i;m++)
   {
      if(i%m==0 && j%m==0 && k%m==0)
      {
         n=m;
      }
   }
   printf("\n%d",n);
}
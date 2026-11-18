#include<stdio.h>
int pille(int n,int rev,int m)
{
  if(n==0)
  {
    return rev;
  }
  rev=rev*10+(n%10);
  int r=pille(n/10,rev,m);
  
  return r;
}
int main()
{
  int n;
  printf("Enter  number :   ");
  scanf("%d",&n);
  int m=n;
  int r=pille(n,0,m);
  if(r==m)
  {
    printf("yes");
  }
  else{
    printf("no");
    //return rev;
  }
  return 0;
}
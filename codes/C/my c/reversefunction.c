#include<stdio.h>
int rev (int x);
void main()
{
  int i,r;
  printf("enter a no:  ");
  scanf("%d",&i);
  r=rev(i);
  printf("%d",r);
}
int rev (int x)
{
  int re=0;
  for(int j=1;j<=x;x=x/10)
  {
    re=(re*10)+(x%10);
  }
  return re;
}
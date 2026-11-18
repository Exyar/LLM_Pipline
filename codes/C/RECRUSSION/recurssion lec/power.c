#include <stdio.h>
int power(int b,int p)
{
    int m;
  if(p==0)
  {
    return 1;
  }
   m=power(b,p-1);
   b=b*m;
   return b;
}
int main()
{
    int b,p;
    printf("enter base: ");
    scanf("%d", &b);
    printf("enter base: ");
    scanf("%d", &p);
    int ans = power(b,p);
    printf("%d",ans);
    return 0;
}
#include <stdio.h>
int powerlog(int b,int p)
{
    if(p==0)return 1;
    //if(p==1) return b;
    int a = powerlog(b,p/2);
    if(p%2==0)
    {
    return a * a;
    }
    else
    {
    return a * a * b;
    }
    
}
int main()
{
    int b,p;
    printf("enter base: ");
    scanf("%d", &b);
    printf("enter power: ");
    scanf("%d", &p);
    int ans = powerlog(b,p);
    printf("%d",ans);
    return 0;
}
#include<stdio.h>
int stair(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    return stair(n-1)+stair(n-2)+stair(n-3);
}
int stair2(int n)
{
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1)+stair(n-2);
}
int main()
{
    int n;
    printf("enter no os stair: ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",ways);
    return 0;
}
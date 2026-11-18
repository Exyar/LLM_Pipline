#include<stdio.h>
void sum(int n,int s)
{
    if(n==0)
    {
        printf("%d",s);
        return;
    }
    s=s+n;
    sum(n-1,s);

    return;
}
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d", &n);
    sum(n,0);
    
    return 0;
}
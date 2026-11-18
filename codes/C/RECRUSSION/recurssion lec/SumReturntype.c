#include<stdio.h>
int sum(int n)
{ 
    int s;
    if(n==0)
    {
        s=0;
        return s;
    }
    s=sum(n-1);
    s=s+n;
    return s;
}
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d", &n);
    int p=sum(n);
    printf("%d",p);
    return 0;
}
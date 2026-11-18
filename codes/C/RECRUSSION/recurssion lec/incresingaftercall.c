#include <stdio.h>
void inc(int n)
{ 
    if (n==0)
        return;
    inc(n-1);
    printf("%d",n);
    return;
}
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d", &n);
    inc(n);
    
    return 0;
}
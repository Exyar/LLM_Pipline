// print decresing to incresing

#include <stdio.h>
void DnI(int n)
{ 
    if (n==0)
        return;
    printf("%d",n);
    DnI(n-1);
    printf("%d",n);
    return;
}
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d", &n);
    DnI(n);
    
    return 0;
}
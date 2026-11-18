#include <stdio.h>
void incpara(int x,int n)
{ 
    if (x>n)
        return;
    printf("%d",x);
    incpara(x+1,n);
    
    return;
}
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d", &n);
    incpara(1,n);
    
    return 0;
}
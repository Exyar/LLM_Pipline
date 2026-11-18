#include<stdio.h>
int fibo(int );
int main()
{
    int n;
    printf("enter no of terms:  ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d",fibo(i));
    }
    return 0;
}
    int fibo(int x)
    {
        if (x==0)
        {
            return 0;
        }
        if(x==1)
        {
            return 1;
        }
        return fibo(x-1)+fibo(x-2);
    }
#include<stdio.h>
void ascend(int *a,int n,int m,int x)
{
    if(a[x]>a[m])
    {
        printf("Not Sorted");
        return;
    }
    
    if(x==n && m==n)
    {
        printf("YES sorted");
        return;
    }
    if(m==n)
    {
        x++;
        m=x-1;
    }
    m++;
    ascend(a,n,m,x);
    return;
}
int main()
{
    int n;
    printf("Enter length of array :    ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element :   ");
        scanf("%d",&arr[i]);
    }
    ascend(arr,n-1,1,0);
    return 0;
}
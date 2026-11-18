#include<stdio.h>
int* bubble(int*a,int n,int x,int y)
{
    if(x==n+1)
    return a;
    if(y==n)
    return a;
    if(a[y]>a[y+1])
    {
        int temp=a[y];
        a[y]=a[y+1];
        a[y+1]=temp;
    }
    int* u=bubble(a,n,x,y+1);
    u=bubble(a,n,x+1,0);
    return u;
}
int main()
{
    int n;
    printf("Enter length of array:   ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element :    ");
        scanf("%d",&arr[i]);
    }
    int* b=bubble(arr,n-1,0,0);
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}
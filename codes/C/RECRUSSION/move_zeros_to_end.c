#include<stdio.h>
int* zero(int*a,int n,int x,int y)
{
    if(x==n)
    {
        return a;
    }
    if(a[x]!=0)
    {
        int temp =a[x];
        a[x]=a[y];
        a[y]=temp;
        y++;
    }
    int*za=zero(a,n,x+1,y);
    return a;
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
    int *z=zero(arr,n,0,0);
    for(int i=0;i<n;i++)
    {
        printf("%d",z[i]);
    }
    
}
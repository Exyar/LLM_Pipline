#include<stdio.h>
int * merge(int *a, int n , int* b , int m , int* c , int l , int x , int y)
{
    if(l==n+m+2)
    {
        return c;
    }
    if(l<=n)
    {
        c[l]=a[x];
        x++;
        l++;
    }
    if(l>n)
    {
        c[l]=b[y];
        y++;
        l++;
    }
    int *d=merge(a,n,b,m,c,l,x,y);
    return c;
}
int main()
{
    int n,m;
    printf("Enter length of array:   ");
    scanf("%d",&n);

    int arr1[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element :    ");
        scanf("%d",&arr1[i]);
    }
    printf("Enter length of Second array:   ");
    scanf("%d",&m);

    int arr2[m];
    for(int i=0;i<m;i++)
    {
        printf("Enter element :    ");
        scanf("%d",&arr2[i]);
    }

    int arr[m+n];

    int *p=merge(arr1,n-1,arr2,m-1,arr,0,0,0);
    for(int i=0;i<m+n;i++)
    {
        printf("\t%d",p[i]);
    }
}
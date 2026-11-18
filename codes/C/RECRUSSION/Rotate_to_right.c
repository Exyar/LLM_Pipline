#include<stdio.h>
int*rotate(int*a,int n,int k,int x,int c,int temp)
{
    if(k==0)
    {
        return a;
    }
    if(x==0)
    {
        return a;
    }
    if(c==0)
    {
        temp=a[n];
    }
    a[x]=a[x-1];
    int*s=rotate(a,n,k,x-1,c+1,temp);
    a[0]=temp;
    if(x!=n)return a;
    s=rotate(a,n,k-1,n,0,0);
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
    int k;
    printf("Enter num of rotation :    ");
    scanf("%d",&k);
    int*r=rotate(arr,n-1,k,n-1,0,0);
    for(int i=0;i<n;i++)
    {
        printf("\t%d",r[i]);
    }
}
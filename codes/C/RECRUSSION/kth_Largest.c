#include<stdio.h>
int* kth(int *a,int n,int x,int m)
{
    if(a[x]>a[m])
    {
        int temp=a[x];
        a[x]=a[m];
        a[m]=temp;
    }
    if(m==n && x==n)
    {
        return a;
    }
    if(m==n)
    {
        x++;
        m=x-1;
    }
    m++;
    int *k=kth(a,n,x,m);
    return a;
}
int main()
{
    int n;
    printf("Enter length of array :   ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element :   ");
        scanf("%d",&arr[i]);
    }
    int k;
    printf("which largest num do you want :   ");
    scanf("%d",&k);
    int *ans=kth(arr,n-1,0,1);
     for(int i=0;i<n;i++)
    {
        printf("%d\t",ans[i]);
    } 
   printf("\n %dth largest is %d",k,ans[n-k]);
    return 0;
}
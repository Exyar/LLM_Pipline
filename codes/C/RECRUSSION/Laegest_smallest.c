#include<stdio.h>
int* min_max(int *a , int n , int x , int max , int min , int *ma , int *mi)
{
    if(max<a[x])
    {
        max=a[x];
    }
    if(min>a[x])
    {
        min=a[x];
    }
    if(x==n)
    {
        *ma=max;
        *mi=min;
        return a;
    }
    x++;
    int *m=min_max(a,n,x,max,min,ma,mi);
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
    int maxf;
    int minf;

    int *m=min_max(arr,n-1,0,arr[0],arr[0],&maxf,&minf);
    printf("%d. \n%d",maxf,minf);
    return 0;
}
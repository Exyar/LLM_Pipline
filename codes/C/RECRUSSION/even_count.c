#include<stdio.h>
int even(int *a,int n)
{
    int k;
    if(n==-1)
    {
        k=0;
        return k;
    }
    k=even(a,n-1);
    if(a[n]%2==0)
    {
        k++;
    
    }
    return k;
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
    int e=even(arr,n-1);
    printf("\n%d",e);
    return 0;
}
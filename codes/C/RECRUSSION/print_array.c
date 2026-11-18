#include<stdio.h>
void arrprint(int *a , int n, int m)
{
    if(m==n)
    {
        return;
    }
    printf("\t%d",a[m]);
    m++;
    arrprint(a,n,m);
    
    return;
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
    arrprint(arr,n , 0);
    return 0;

}
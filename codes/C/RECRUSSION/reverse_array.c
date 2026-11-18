#include<stdio.h>
void arrrev(int *a , int n)
{
    if(n==-1)
    {
        return;
    }
    printf("\t%d",a[n]);
    arrrev(a,n-1);
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
    arrrev(arr,n-1);
    return 0;

}
#include<stdio.h>
int majority(int*a,int n, int count ,int candidate)
{
    if(n==-1)
    {
        return candidate;
    }
    if(a[n]==candidate)
    {
        count++;
    }
    else{
        count--;
    }
    if(count<0)
    {
        candidate=a[n];
        count=0;
    }
    int m=majority(a,n-1,count,candidate);
    return m;

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
    int m=majority(arr,n-1,0,arr[0]);
    printf("%d",m);
    return 0;
}
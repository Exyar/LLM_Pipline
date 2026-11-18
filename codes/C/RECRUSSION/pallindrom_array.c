#include<stdio.h>
int palli(int*a,int x,int y,int k)
{
    if(x==y || x>y)
    {
        return k;
    }
    if(a[x]==a[y])
    {
        
        k++;
    }
    int d=palli(a,x+1,y-1,k);
    return d;
    
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
    int p=palli(arr,0,n-1,0);
    if(p==n/2)
    {
        printf("yes");
    }
     else
    {
        printf("no");
    } 
}
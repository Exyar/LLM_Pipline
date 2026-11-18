#include<stdio.h>
void binary(int *a , int n , int p , int mid,int st,int end)
{
    mid = st+(end-st)/2;
    if(a[mid] == p)
    {
        printf("FOUND");
        return;
    }
    if(st == end-1)
    {
           printf("NOT FOUND"); 
           return; 
    }
    if(a[mid]<p)
    {
        st=mid;
        mid=st+(end-st)/2;
    }
    if(a[mid]>p)
    {
        end=mid;
        mid=st+(end-st)/2;
    }
    binary(a,n,p,mid,st,end);
    
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
    int p;
    printf("Enter element to find :    ");
    scanf("%d",&p);

    binary(arr,n,p,0,0,n);
}
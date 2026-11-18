#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int m;
    printf("enter rows: ");
    scanf(" %d",&n);
    printf("enter colums: ");
    scanf(" %d",&m);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter elements: ");        
            scanf(" %d",&arr[i][j]);
        }
    }
    int max=INT_MIN;
    int sum=0;
    int mr;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
        if(max<sum)
        {
            max=sum;
            mr=i;
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        printf("%d ",arr[mr][i]);
    }
    printf("sum is :%d",max);
    return 0;
}
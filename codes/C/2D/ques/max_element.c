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
            scanf("%d",&arr[i][j]);
        }
        
    }
    int max=INT_MIN;
    int r;
    int c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
                r=i;
                c=j;
            }
        }
        printf("\n");
    }
    printf("max element: %d ,position is :(%d,%d)",max,r+1,c+1);
    
    return 0;
}
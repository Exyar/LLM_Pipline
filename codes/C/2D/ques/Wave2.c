#include<stdio.h>
int main()
{
    int n;
    int m;
    printf("enter rows: ");
    scanf(" %d",&n);
    printf("enter colums: ");
    scanf(" %d",&m);
    int arr[n][m];
    printf("enter elements: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {       
            scanf(" %d",&arr[i][j]);
        }
    }

    printf("\n");
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",arr[j][i]);
            }
            printf("\n");
        }
        if(i%2==1)
        {
            for(int j=n-1;j>=0;j--)
            {
                printf("%d ",arr[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("enter elements: ");        // jo "j" h who horizontally(new colums) add kar raha h aur "i"vertically(new rows) 
            scanf(" %d",&arr[i][j]);
        }
    }

    int r1,c1,r2,c2;
    printf("for sum the frist crod are: ");
    scanf(" %d",&r1);
    scanf(" %d",&c1);
    printf("for sum the sec crod are: ");
    scanf(" %d",&r2);
    scanf(" %d",&c2);
    int sum=0;
    for(int i=r1;i<=r2;i++)
    {
        for(int j=c1;j<=c2;j++)
        {
            sum+=arr[i][j];
        }
        printf("\n");
    }
    printf("%d",sum);
    return 0;
} 
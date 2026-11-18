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
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum+=arr[i][j];
        }
        printf("\n");
    }
    printf("%d",sum);
    
    return 0;
}
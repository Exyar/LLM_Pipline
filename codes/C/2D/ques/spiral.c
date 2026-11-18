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
    
    // spiral print
    printf("\n");
    int minr=0;
    int maxr=n-1;
    int minc=0;
    int maxc=m-1;
    int totalElements=n*m;
    int count=0;

    while(count<totalElements)
    {
        //print minimum row
        for(int j=minc;j<=maxc;j++)
        {
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        if(count<totalElements)
        {
            break;
        }
        //print the maximum columns
        for(int i=minr;i<=maxr;i++)
        {
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count<totalElements)
        {
            break;
        }
        //print maximum row
        for(int i=maxc;i>=minc;i--)
        {
            printf("%d ",arr[maxr][i]);
            count++;
        }
        maxr--;
        if(count<totalElements)
        {
            break;
        }
        //print minimum columns
        for(int i=maxr;i>=minr;i--)
        {
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
    }
    return 0;
}

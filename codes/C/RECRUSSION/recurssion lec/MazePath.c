#include <stdio.h>
//with four variable
/* int maze(int cr,int cc,int er,int ec)
{
    int downways=0;
    int rightways=0;
    if(cc==ec && cr==er) 
        return 1;
    if(cr==er)
    {
        rightways+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec)
    {
        downways+=maze(cr+1,cc,er,ec);
    }
    if(cc<ec && cr<er)
    {
        rightways+=maze(cr,cc+1,er,ec);
        downways+=maze(cr+1,cc,er,ec);
    }
    int totalways =rightways + downways;
    return totalways;
} */

//with 2 variable
int maze2(int n,int m)
{
    int rightways=0;
    int downways=0;
    if(n ==1 && m==1 )
        return 1;
    if(n==1)
    {
        rightways=maze2(n,m-1);
    }
    if(m==1)
    {
        downways=maze2(n-1,m);
    }
    if(n>1 && m>1)
    {
        rightways=maze2(n,m-1);
        downways=maze2(n-1,m);
    }
    int totalways =rightways + downways;
    return totalways;
}

int main()
{
    int n,m;
    printf("enter no of rows of maze : ");
    scanf("%d", &n);
    printf("enter no of columns of the maze : ");
    scanf("%d", &m);
    //int ans = maze(1,1,n,m);  // for 4 variable
    int ans = maze2(n,m);       // for 2 variable
    printf("%d",ans);
    return 0;
}
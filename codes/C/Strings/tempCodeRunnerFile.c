#include<stdio.h>
int main()
{
    typedef struct book
    {
        int page;
        float price;
    }kitab;
    kitab arr[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter page :   ");
        scanf("%d",&arr[i].page);
        printf("Enter price :  ");
        scanf("%f",&arr[i].price);
    }
    for(int i=0;i<3;i++)
    {
        printf("%d",arr[i].page);
        printf("%f",arr[i].price);
    }
}
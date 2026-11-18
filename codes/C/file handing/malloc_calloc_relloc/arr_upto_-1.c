#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter length: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("enter num: ");
    int i=-1;
    int j=0;
    while(arr[i]!=-1)
    {
        i++;
        scanf("%d",&arr[i]);
        if(i==n-1)
        {
            n++;
            arr=(int*)realloc(arr,n*sizeof(int));
            printf("added 1 new memoery ");
        }
        
    }
    for(int k=0;k<n-1;k++)
    {
    printf("%d",arr[k]);
    }
    return 0;
}
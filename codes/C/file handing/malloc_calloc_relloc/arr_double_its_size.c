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
    int j=0;
    for(int i=j;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i==n-1)
        {
            n=n*2;
            printf("size is expanding:");
            arr=(int*)realloc(arr,(n)*sizeof(int));
            j=i;
        }
    }
    
   return 0;
}
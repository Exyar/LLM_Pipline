#include<stdio.h>
int* selection(int *a,int n,int x,int y,int min)
{
    if(x==n+1)
    {
        return a;
    }
    if(y==n+1)
    {
        return a;
    }
    if(min>a[y])
    {
        int temp=min;
        min=a[y];
        a[y]=temp;
    }
    a[x]=min;
    int *e=selection(a,n,x,y+1,min);
    min=a[x+1];
    /* if(y!=n).    ]
    {               |
        return e;   |   lagao ya mat lagao do same hi kaam karege
                    ]
    } */            
    x++;
    e=selection(a,n,x,x+1,min);
    return e;
}
int main()
{
    int n;
    printf("Enter length of array:   ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter element :    ");
        scanf("%d",&arr[i]);
    }
    int *s=selection(arr,n-1,0,1,arr[0]);
    for(int i=0;i<n;i++)
    {
        printf("%d",s[i]);
    }
    return 0;
}
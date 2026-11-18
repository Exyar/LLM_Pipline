#include<stdio.h>
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
    int count=0;
    int candidate=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==candidate)
        {
            count++;
        }
        else 
        {
            count--;
        }
        if(count<0)
        {
            candidate=arr[i];
            count=0;
        }
    }
    printf("majority element is %d",candidate);
    return 0;
}
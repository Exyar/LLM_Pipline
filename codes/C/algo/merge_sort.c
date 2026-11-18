#include<stdio.h>
void merge(int *a,int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;

    int L[n1],R[n2];
    
    for(int i=0;i<n1;i++)
        L[i]=a[l+i];
    for(int j=0;j<n2;j++)
        R[j]=a[m+1+j];

    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k++]=L[i++];
        }
        else
        {
            a[k++]=R[j++];
        }
    }

    while(i<n1)
        a[k++]=L[i++];
    while(j<n2)
        a[k++]=R[j++];
}
void mergeSort(int*a,int st,int end)
{
    if(st==end)
       return;
    int mid=st+(end-st)/2;
    
    //left
    mergeSort(a,st,mid);
    //right
    mergeSort(a,mid+1,end);
    //merging both halves
    merge(a,st,mid,end);
}
int main()
{
  int n;
  printf("Enter the length of array :    ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("Enter element :   ");
    scanf("%d",&arr[i]);
  }
  mergeSort(arr,0,n-1);
  for(int i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  }
  return 0;
}
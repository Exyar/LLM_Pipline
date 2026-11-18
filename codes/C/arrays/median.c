 #include<stdio.h>
 void main()
 {
  int n,p;
  printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
  int e=n%2;
   for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]<arr[j])
      {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
    for(int i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  } 
  
  if(e==0)
  {
    int m=(arr[n/2]+arr[(n/2)-1])/2;
    printf("median is: %d",m);
  }
  else
  {
    printf("median is: %d",arr[n/2]);
  }

 }
 
 
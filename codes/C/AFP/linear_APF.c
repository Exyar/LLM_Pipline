 #include<stdio.h>
 int linear(int *l,int ,int );
 void main()
 {
  int n,p;
  printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  int *ptr;
  ptr=arr;
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&ptr[i]);
  }
  printf("enter to search: ");
  scanf("%d",&p);
  int f=linear(arr,n,p);
  if(f==1)
  {
    printf("found");
  }
  else
  {
    printf("not found");
  }
 }

 int linear(int *l,int x,int y)
 {
  int found=0;
  for(int i=0;i<x;i++)
  {
    if(*(l+i)==y)
    {
      found=1;
      break;
    }
  }
  return found;
 }
 
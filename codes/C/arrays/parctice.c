#include<stdio.h>
void main()
{


  // rotation by kth (right)
  /* int n,k;
  int p=0;
  int arr1[n];
   printf("Enter length of array :   ");
  scanf("%d",&n);
  int arr[n];
  
 for(int i=0;i<n;i++)
 {
  printf("Enter elements :   ");
  scanf("%d",&arr[i]);
 }
 printf("num of rotation");
 scanf("%d",&k);
 for(int i=0;i<k;i++)
 {
  int last=arr[n-1];
  for(int j=n-1;j>0;j--)
  {
    arr[j]=arr[j-1];
  }
  arr[0]=last;
 }
 for(int i=0;i<n;i++)
 {
  printf("%d",arr[i]);
 } */



 // median
/*  int n,e;
  printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
e=n%2;
for(int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
  {
    if(arr[i]>arr[j])
    {
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
  }
}

if(e==0)
{
    int m=(arr[n/2]+arr[(n/2)-1])/2;
    printf("median is: %d",m);
}
else
{
  printf("median is: %d",arr[n/2]);
} */



// mode
 /* int n,k,m,num;
  printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
  int count =1;
  m=1;
  for(int i=0;i<n;i++)
  {
    
    count=1;
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
      }
      
    }
    if(m<count)
      {
        k=count;
        num=arr[i]; 
        m=count; 
      }
  }
  printf("%d times and  mode no is %d",k,num); */



  // union
   /* int n,m;
  printf("length of array:  ");
  scanf("%d",&n);
  int arr1[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr1[i]);
  }
  printf("length of array:  ");
  scanf("%d",&m);
  int arr2[m];
  for(int i=0;i<m;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr2[i]);
  }
  //int k=0;
  if(n>m)
  {
    for(int i=0;i<n;i++)
    {
      printf("%d",arr1[i]);
    }
    for(int i=0;i<m;i++)
    {
      int k=0;
      for(int j=0;j<n;j++)
      {
        if(arr2[i]==arr1[j])
        {
          k++;
        }
      }
      if(k==0)
      {
        printf("%d",arr2[i]);
      }
    }
  } */
    


  //majority
  /* int n;
   printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
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
    printf("%d",candidate); */



  // leader nums
  /* int n;
   printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
  printf("\nleader nums are%d",arr[n-1]);
  for(int i=n-2;i>=0;i-- )
  {
    int k=0;
    for(int j=n-1;j>i;j--)
    {
      if(arr[j]>arr[i])
      {
       k++;
      }
    }
    if(k==0)
    {
    printf("\nleader nums are %d",arr[i]);
    }
  } */
   


  //move 0 to end
 /*  int n;
   printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
  int count=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==0)
    {
      count++;
    }
  }
  int j=n-1;
  int k=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==0)
    {
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      j--;
      k++;
      if(k==count)
      {
        break;
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    printf("%d",arr[i]);
  } */


  ///////////////////////////////////////////////not completed////////////////////////////////////////////////
  //binary search
    int n,p,k=0;
   printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
  printf("enter no:  ");
  scanf("%d",&p);
  int st,end=n-1; 
  st=0;
  int mid;
  mid=(st+end)/2;
  while(st<=end)    //while (st!=end)
  {
  
    if(p>arr[mid]) 
    {
      st=mid+1;
      mid=(st+end)/2;
    }
    if(p<arr[mid])
    {
      end=mid-1;
      mid=(st+end)/2;
    }
    if(p==arr[mid])
    {
      printf("\n%d : arr[mid]=",arr[mid]);
      printf("\n%d:p = ",p);
      printf("found");
      k++;
      printf("\nhi");
      break;
    }
  }
  if(k==0)
  {
    printf("not found");
  } 
 ///////////////////////////////////////////////not completed///////////////////////////////////////////////////




//missing nums
 /* int n;
   printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n-1;i++)
  {
    if(arr[i+1]!=arr[i]+1)
    {
      printf("\nmissing no is: %d",(arr[i]+1));
    }
  }  */




  //first and last occu of num
   /* int n,p,m,k=0;
   printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
  printf("enter no to find occ:  ");
  scanf("%d",&p);
  for(int i=0;i<n;i++)
  {
    if(arr[i]==p)
    {
      m=i+1;
      k++;
      if(k==1)
      {
        printf("first occ at: %d",m);
      }
    }
  }
  printf("/nlast occ at : %d",m); */




  //kadane algorithm
  /* int n;
   printf("length of array:  ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
  {
    printf("enter elements:  ");
    scanf("%d",&arr[i]);
  }
  int sum=0;
  int maxsum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+arr[i];
    if(maxsum<sum)
    {
      maxsum=sum;
    }
    if(sum<0)
    {
      sum=0;
    }
  }
  printf("max sub array sum : %d",maxsum); */
}
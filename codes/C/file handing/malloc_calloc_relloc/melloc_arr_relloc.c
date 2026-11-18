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
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

   char c;
   int extra=0;
   int *p;

   do
   {
    printf("do you wwant extra space: ");
    scanf(" %c",&c);
    //printf("%c",choise);
    if(c =='y')
    {
        printf("\nhOw much space you want: ");
        scanf("%d",&extra); 
        int oldlen=n;
        n+=extra;   
        arr=(int *)realloc(arr,(n)*sizeof(int));
        p=arr;
        for(int i=oldlen;i<n;i++)
        {
            printf("Enter no. :  ");
            scanf("%d",&p[i]);
        }
    }
       
   } while(c =='y');

   for(int i=n-1;i>=0;i--)
   {
    printf("\t%d",p[i]);
   }
   return 0;
}
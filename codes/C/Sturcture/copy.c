#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
   typedef struct student
   {
     char name[20];
     int marks;
   }student;
   
   student s1,s2,s3;

   strcpy(s1.name,"askh");
   s1.marks=123;

   printf("enter name: ");
   scanf("%s",&s2.name);
   printf("enter marks: ");
   scanf("%d",&s2.marks);
   
   s3=s2;

   printf("%s",s1.name);

   printf("\n-->%s",s3.name);
   printf("\t-->%d",s3.marks);
   //return 0; 
   int m=sqrt(25);
   printf("\n%d",m);
   return 0;
  }

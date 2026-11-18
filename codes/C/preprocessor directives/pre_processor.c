#include<stdio.h>
#define pi 3.14
//#define pi 10
void Areathree(int r);
void Areatwo(int r);
 void Areaone(int r)
 {
    int ans =pi*r;
    printf("\n%d",ans); // it take value of pi 3.14
    return;
 }
int main()
{
   printf("%f",pi);


   printf("enter radius: ");
   int radius;
   scanf("%d",&radius);
   int area=pi*radius;
   printf("%d",area);
   

   /* int *p;
   p=&pi;  */       // pointer is not possible


   // now re difine pi
   #undef pi
   #define pi 9.12
   printf("\n%f",pi);

   // functions
   Areaone(radius);
   Areatwo(radius);
   Areathree(radius);
   printf("\n%f",pi);
   

   // redefine with i
   int i=123;
   #define test i
   printf("\n%d",test);


   // array
   #define ele 5
   int n=9;
   int arr[n];
   arr[0]=ele;
   printf("%d",arr[0]);
   return 0;
}
void Areatwo(int r)
 {
    int ans =pi*r;
    printf("\n%d",ans); // it take value of pi 9.12
    return;
 }
 void Areathree(int r)
 {
    #define pi 20
    int ans =pi*r;
    printf("\n%d",ans); // it take value of pi 20
    #undef pi // it will not affect printf("%f",pi); in line 36 because it goes like a bullte mean it not      affect by any scope of curly brackets its like a global 
    return;
 }
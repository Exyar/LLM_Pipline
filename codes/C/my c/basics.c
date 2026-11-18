/*#include<stdio.h>
void main()
{
  /*float i, j ;
  float k;
  printf("Entera a number  :  ");
  scanf("%f",&i);
  printf("Enter scecond number :   ");
  scanf("%f",&j);
  k = j / i;
  float m = 3.54;
  printf("Multiply is :  %f   *    %f    =     %f",i,j,k);*/


  /*int c;
  printf("Enter a alphabet :     ");
  scanf("%d",&c);
  printf("%d    ",c);
  printf("%d",&c);*/
    /*float a,i,j,k;
    printf("enter a num:   ");
    scanf("%f",&a);
    printf("enter a num:   ");
    scanf("%f",&i);
    printf("enter sec num:   ");
    scanf("%f",&j);
    k=i+j+a;
    printf("Addition is :  %f",k);
    k=a*i*j;
    printf("\nMultiplicatiom is :   %f",k);
    k=(i+j+a)/3;
    printf("\navg is:  %f  ",k);*/
  /*float p,r,t,si;
  printf("enter pricipal:  ");
  scanf("%f",&p);
  printf("enter rate:      ");
  scanf("%f",&r);
  printf("enter time (in years):      ");
  scanf("%f",&t);
  si=(p*r*t)/100;
  printf("your intrest is : %f ",si);*/
  /*int x,y,z;
  x=9;
  y=5;
  z=x%y;
  char ch='5';
  printf("%d",ch);*/


#include <iostream.h>
using namespace std;
class aksh
  {
    int age;
    char name[20];
    int stnd;
    public:
    display();
    get();
  };

void main()
{
  aksh a;
  a.get();
  a.display();
}
void aksh::display()
{
  printf("%d",age);
  printf("%s",name);
  printf("%d",stnd);
}
void aksh::get()
{
  printf("Enter Name:  ");
  scanf("%s",name);
  printf("Enter class :   ");
  scanf("%d",age);
  printf("Enter age :   ");
  scanf("%d",age);
}

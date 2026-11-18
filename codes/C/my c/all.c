#include <stdio.h>
int add(int *, int *);
int sub(int *, int *);
int mul(int *, int *);
int div(int *, int *);
int hcf(int *, int *);
int lcm(int *, int *);
int coun(int *, int *);
int sumd(int *, int *);
int arm(int *, int *);
int str(int *, int *);
int exi(int *, int *);
void main()
{
  int n;
  do
  {
    printf("\n\nwhich oparation do yopu like to do ");
    printf("\n add :  1\n sub : 2\n mul : 3\n div : 4\n hcf : 5\n lcm : 6\n count digit : 7\n sum of digit : 8\n armstrong : 9\n strong : 10\n exit  : 0 \nPRESS");
    scanf("%d", &n);
    if (n == 1)
    {
      int i, j, a;
      int *p, *q;
      p = &i;
      q = &j;
      printf("enter 1st num:  ");
      scanf("%d", p);
      printf("\nenter 2nd num:  ");
      scanf("%d", q);
      a = add(&i, &j);
      printf("\naddition is :   %d", a);
    }
    if (n == 2)
    {
      int i, j, s;
      int *p, *q;
      p = &i;
      q = &j;
      printf("enter 1st num:  ");
      scanf("%d", p);
      printf("enter 2nd num:  ");
      scanf("%d", q);
      s = sub(&i, &j);
      printf("sub is: %d",s);
    }
    if (n == 3)
    {
      int i, j, m;
      int *p, *q;
      p = &i;
      q = &j;
      printf("enter 1st num:  ");
      scanf("%d", p);
      printf("enter 2nd num:  ");
      scanf("%d", q);
      m=mul(&i,&j);
      printf("%d",m);

    }
    if (n == 4)
    {
      int i, j, d;
      int *p, *q;
      p = &i;
      q = &j;
      printf("enter 1st num:  ");
      scanf("%d", p);
      printf("enter 2nd num:  ");
      scanf("%d", q);
      d=mul(&i,&j);
      printf("%d",d);
    }
    if (n == 5)
    {
      int i, j, h;
      int *p, *q;
      p = &i;
      q = &j;
      printf("enter 1st num:  ");
      scanf("%d", p);
      printf("enter 2nd num:  ");
      scanf("%d", q);
      h=hcf(&i,&j);
      printf("%d",h);
    }
    if (n == 6)
    {
      int i, j, l;
      int *p, *q;
      p = &i;
      q = &j;
      printf("enter 1st num:  ");
      scanf("%d", p);
      printf("enter 2nd num:  ");
      scanf("%d", q);
      l=lcm(&i,&j);
      printf("lcm is: %d",l);
    }
    if (n == 7)
    {
      int i, j, s;
      int *p, *q;
      p = &i;
      q = &j;
      printf("enter 1st num:  ");
      scanf("%d", p);
      printf("enter 2nd num:  ");
      scanf("%d", q);
    }
  }
   while (n != 0);
}
int add(int *x, int *y)
{
  int k = *x + *y;
  return k;
}
int sub(int*x,int*y)
{
  int k=*x-*y;
  return k;
}
int mul(int*x,int*y)
{
  int k=*x * *y;
  return k;
}
int div(int*x,int*y)
{
  int k=*x / *y;
  return k;
}
int lcm(int*x,int*y)
{
  int max=*x;
  if(*y>max)
  {
    max=*y;
  }
  for( ; ;max++)
  {
    if(max%(*x)==0 && max%(*y)==0)
    {
      return max;
    }
  }
}
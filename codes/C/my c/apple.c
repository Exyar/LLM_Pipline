#include <stdio.h>
int add(int *, int *);
int sub(int *, int *);
int mul(int *, int *);
int div(int *, int *);
int hcf(int *, int *);
int lcm(int *, int *);
int count(int *);
int sumd(int *);
int arm(int *);
int str(int *);
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
      printf("sub is: %d", s);
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
      m = mul(&i, &j);
      printf("mul is:%d", m);
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
      d = div(&i, &j);
      printf("div is:%d", d);
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
      h = hcf(&i, &j);
      printf("hcf is:%d", h);
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
      l = lcm(&i, &j);
      printf("lcm is: %d", l);
    }
    if (n == 7)
    {
      int i, j, c;
      int *p, *q;
      p = &i;
      q = &j;
      printf("enter num:  ");
      scanf("%d", p);
      c = count(&i);
      printf("num of digit: %d", c);
    }
    if (n == 8)
    {
      int i, j, s;
      int *p, *q;
      p = &i;
      q = &j;
      printf("enter num:  ");
      scanf("%d", p);
      s = sumd(&i);
      printf("sum of digit: %d", s);
    }
    if (n == 9)
    {
      int i, j, a, n;
      int *p, *q;
      p = &i;
      q = &j;
      printf("enter num:  ");
      scanf("%d", p);
      n = *p;
      a = arm(p);
      if (n == a)
      {
        printf("it is a armstrong no");
      }
      else
      {
        printf("NO it is not a armstrong num");
      }
    }
    if (n == 10)
    {
      int i, j, s, n;
      int *p, *q;
      p = &i;
      q = &j;
      printf("enter num:  ");
      scanf("%d", p);
      n = *p;
      s = arm(p);
      if (n == s)
      {
        printf("it is a strong no");
      }
      else
      {
        printf("NO it is not a strong num");
      }
    }
  } while (n != 0);
}
int add(int *x, int *y)
{
  int k = *x + *y;
  return k;
}
int sub(int *x, int *y)
{
  int k = *x - *y;
  return k;
}
int mul(int *x, int *y)
{
  int k = *x * *y;
  return k;
}
int div(int *x, int *y)
{
  int k = *x / *y;
  return k;
}
int lcm(int *x, int *y)
{
  int max = *x;
  if (*y > max)
  {
    max = *y;
  }
  for (;; max++)
  {
    if (max % (*x) == 0 && max % (*y) == 0)
    {
      return max;
    }
  }
}
int hcf(int *x, int *y)
{
  int min = *x;
  int n;
  if (*y < min)
  {
    min = *y;
  }
  for (int i = 1; i <= min; i++)
  {
    if ((*x) % i == 0 && (*y) % i == 0)
    {
      n = i;
    }
  }
  return n;
}
int count(int *x)
{
  int k = 0;
  for (int i = 1; i <= (*x); *x = *x / 10)
  {
    k = k + 1;
  }
  return k;
}
int sumd(int *x)
{
  int sum = 0;
  for (int i = 1; i <= *x; *x = *x / 10)
  {
    sum = (*x % 10) + sum;
  }
  return sum;
}
int arm(int *x)
{
  int sum = 0;
  for (int i = 1; i <= *x; *x = *x / 10)
  {
    sum = ((*x % 10) * (*x % 10) * (*x % 10)) + sum;
  }
  return sum;
}
int str(int *x)
{
  int sum = 0;

  for (int i = 1; i <= *x; *x = *x / 10)
  {
    int fact = 1;
    int j = *x % 10;
    if (j == 0)
    {
      fact = 1;
    }
    else
    {
      for (int f = j; 1 <= f; f--)
      {
        fact = fact * f;
      }  
    }
    sum = sum + fact;
  }
}
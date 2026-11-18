#include<stdio.h>
int asc(char);

void main()
{
  int i;
  char ch;
  printf("Enter a character :   ");
  scanf("%c",&ch);
  i = asc(ch);
  printf("\nASCII VALUE IS :    %d",i);
}
int asc(char c)
{
  int j;
  j = (int)c;
  return j;
}
   
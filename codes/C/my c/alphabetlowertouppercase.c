#include<stdio.h>
void main()
{
  char ch;
  printf("Enter a character :  ");
  scanf("%c",&ch);

  int i = (int)ch;
  
  if(i>=65 && i<=96) 
  {
    i = i+ 32;
    printf("%c",i);
  }
  else
  {
    i = i - 32;
    printf("%c",i);
  }
 

 
}
#include<stdio.h>

// I METHOD

void main()
{
  int i , j , k ,l ;
  printf("Enter FIRST no.  :  ");
  scanf("%d",&i);
  printf("Enter SECOND no.  :  ");
  scanf("%d",&j);
  printf("Enter THIRD no.  :  ");
  scanf("%d",&k);
  printf("Enter FOURTH no.  :  ");
  scanf("%d",&l);
  if(i>=j && k>=l)
  {
    if(i>k)
    {
      printf(" FIRST");
    }
    if(k>i)
    {
      printf("THIRD");
    }
    if(u==i)
    {
      printf("FIRST - THIRD");
    }
  }
  if(i<=j && k>= l)
  {

  }
}

// II METHOD

 /*int max = i;
 if(j>max)
 max=j;
 if(k>max)
 max=k;
 if(l>max)
 max=l;
 printf("%d",max);*/

// III METHOD

 /*
 if(i>j && i<k && i>l )
 printf("FIRST");
 if(j>i && j<k && j>l )
 printf("SECOND");
 if(k>j && k<i && k>l )
 printf("THIRD");
 if(l>j && l<k && l>i )
 printf("FOURTH");
 */

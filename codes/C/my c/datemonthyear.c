# include<stdio.h>
void main()
{
  int i , j , k , l , m , n , o , p , r ;
  printf("Enter YEAR :     ");
  scanf("%d",&i);
  printf("Enter MONTH :    ");
  scanf("%d",&j);
  printf("Enter DATE :     ");
  scanf("%d",&k);
  l = i%4;
  m = i%100;
  n = i%400;
  if(i>0 && j>0 && k>0)
  {
    if(l == 0 && m!=0 && n == 0)
    {
        if(j<=12)
        {
          if(j==2)
          {
            if(k<=29)
            {
              printf("You Entered Valid Date - Month - Year");
            }
            else
            {
              printf("You Entered Invalid Date");
            }
          }
          if(j==1 || j==3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
          {
            if(k<=31)
            {
              printf("You Entered Valid Date - Month - Year ");
            }
            else
            {
              printf("You entered Invalid Date");
            }
          }
          if(j == 2 || j == 4 || j == 6 || j == 9 || j == 11)
          {
            if(k<=30)
            {
              printf("You Entered VALID EVERYTHING");
            }
            else
            {
              printf("You Entered Invalid Date ");
            }
          }
        }
        else
        {
          printf("You Entered Invalid Month");
        }
    }
    else
    {
      if(j<=12)
      {
        if(j==2)
        {
          if(k<=28)
          {
            printf("You Entered VALID EVERYTHING");
          }
          else
          {
            printf("you enter invalid date");
          }
        }
        if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
        {
          if(k<=31)
          {
            printf("you enetr valid everthing");
          }
          else
          {
            printf("you enter invalid date");
          }
        }
        if(j==2||j==4||j==6||j==9||j==11)
        {
          if(k<=30)
          {
            printf("you enter valid everthing");
          }
          else
          {
            printf("you enter invalid date");
          }
        }
      }
      else
      {
        printf("you enter invalid month");
      }
    }
  }
  else
  {
    printf("invalid entered ");
  }
}

#include<stdio.h>
#include "a.c"
#define pi 3.14 
int main()
{
    float y;
    y=pi+5;
    printf("%f",y);
    //add();
    # undef pi

    //y=pi+10;
    printf("\t%f",y);
    #define pi 12
    printf("\n%d",pi);
    return 0;

}
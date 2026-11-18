#include<stdio.h>
int main()
{
    char str[11]={'a','k','c','d','e','f','g','h','i','j','\0'};
    //(1)
    /* for(int i=0;i<11;i++)
    {
        printf("%c",str[i]);  // NULL character
    } */
    
    
    printf("\n");
    
    //(2)
    /* int i=0;
    while(str[i]!='\0')
    {
        printf("\t%c",str[i]);
        i++;
    } */
    
    printf("\n");

    //(3)
    /* char arr[]="hello";
    int j=0;
    while(j<5)
    {
        printf("%c",arr[j]);
        j++;
    }
    return 0; */

    printf("\n");

    //(4)
   /*  char arr[]="hello u";
    int j=0;
    while(arr[j]!='\0')
    {
        printf("%c",arr[j]);
        j++;
    }
    return 0; */

    printf("\n");

    char arr[]="hello u";
    int j=0;
    while(arr[j]!='\0')
    {
        printf("%c",arr[j]);
        j++;
    }
}
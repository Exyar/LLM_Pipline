#include<stdio.h>
#include<string.h>
int main()
{
    /*char str[11]={'a','k','c','d','e','f','g','h','i','j','\0'};
    //(1)
    for(int i=0;i<11;i++)
    {
        printf("%c",str[i]);  // NULL character
    }
    
    
    printf("\n");
    
    //(2)
    int i=0;
    while(str[i]!='\0')
    {
        printf("\t%c",str[i]);
        i++;
    }*/

    //(3)
    
    char str1[]="hello Akshii Patidar sundrel";
    printf("\n%s",str1);

    char str2[29];
    strcpy(str2,str1);  
    printf("\n%s",str2);

    int i=strlen(str1);
    printf("\n%d",i);

    char str3[32]="123";
    strcat(str3,str1);
    printf("\n%s",str3);

    //(4)
    //char str[20];
    //printf("enter your name :    ");
    //scanf("%s",str);
    //printf("%s",str);

    //gets(str);
    //puts(str);
    return 0;
}
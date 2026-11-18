#include<stdio.h>
int main()
{
    FILE *ptr;
    FILE *ptr1;

    ptr=fopen("akshii.txt","a");
    ptr1=fopen("papa.txt","a");
    fprintf(ptr,"\nHello");
    fprintf(ptr1,"\nHello Papa");

    // writting a variable in file
    int i=10;
    fprintf(ptr,"\n%d",i);

    // writting a string in file     
    char str[20]="Akshii patidar";
    fprintf(ptr1,"\n%s",str);

    // Reading from file
    FILE *fp;
    char str1[100];
    //fp=fopen("mamma.txt","a");
    //fprintf(fp,"Hi this is Akshii's mother. Akshii is a fool boy full of flowers");
    fp=fopen("mamma.txt","r");
    fscanf(fp,"%[^\n]",str1);
    printf("%s",str1);
    fclose(fp);
    return 0;
}
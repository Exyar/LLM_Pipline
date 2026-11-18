#include<stdio.h>
#include<string.h>
int main()
{
    char str[20]="aksh";
    // 2nd index pe 'l' dalna h
    for(int i=3;i>=2;i--)
    {
        str[i+1]=str[i];
    }
    str[2]='l';
    puts(str);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    /* char name[10];
    printf("enter name: ");
    gets(name);
    int size=strlen(name); */
    int size = 4;
    char *name = (char *)malloc(size * sizeof(char));
    if (name == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }
    printf("enter name: ");
    gets(name);
    char c;
    int extra = 0;
    int *p;

    do
    {
        printf("do you wwant extra space: ");
        scanf(" %c", &c);
        // printf("%c",choise);
        if (c == 'y')
        {
            printf("\nhOw much space you want: ");
            scanf("%d", &extra);
            int oldlen = size;
            size += extra;
            name = (char *)realloc(name, (size) * sizeof(char));
            // p=name;
            /* for(int i=oldlen;i<size;i++)
            {
                printf("Enter no. :  ");
                scanf(" %c",&name[i]);
            } */
        }

    } while (c == 'y');

    for (int i = 0; i < size; i++)
    {
        printf("\t%c", name[i]);
    }
    return 0;
}
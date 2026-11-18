#include <stdio.h>

int main()
{
    int n;
    int m;
    printf("enter rows: ");
    scanf(" %d", &n);
    printf("enter colums: ");
    scanf(" %d", &m);
    int arr1[n][m];
    printf("enter elements of 1st arr: ");
    printf("\n");
    for (int i = 0; i < n; i++)
    {           
        for (int j = 0; j < m; j++)
        {
            scanf(" %d", &arr1[i][j]);
        }
    }
    int n2;
    int m2;
    printf("enter rows: ");
    scanf(" %d", &n2);
    printf("enter colums: ");
    scanf(" %d", &m2);
    int arr2[n2][m2];
    printf("enter elements of 2nd arr: ");
    printf("\n");
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            scanf(" %d", &arr2[i][j]);
        }
    }

    if (m == n2)
    {
        int r = 0;
        int c = 0;
        int res[n][m2];
        for (int i1 = 0, j2 = 0; j2 < m2; j2++)
        {
            int sum = 0;
            for (int j1 = 0, i2 = 0; j1 < m,i2<n2; j1++, i2++)
            {
                sum += arr1[i1][j1] * arr2[i2][j2];
            }
            res[r][c] = sum;
            c++;
            if (j2 == m2 - 1)
            {
                j2 = -1;
                i1++;
                r++;
                c = 0;
            }
            if (i1 == n)
            {
                break;
            }
        }
printf("Ans is: \n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m2; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("multiplication is not possible");
    }

    return 0;
}
#include <stdio.h>
int occur(int *a, int n, int p, int k, int m)
{
    if (n == -1)
    {
        return m;
    }
    if (a[n] == p)
    {
        k++;
        m = n;
    }
    if (k == 1)
    {
        printf("\nLAST : %d", n + 1);
        k++;
    }
    int o = occur(a, n - 1, p, k, m);
    if (n==o)
    {
        printf("\nFIRST : %d", n + 1);
    }
    return o;
}
int main()
{
    int n;
    printf("Enter length of array:   ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element :    ");
        scanf("%d", &arr[i]);
    }
    int p;
    printf("Enter the number to find the first and last occurance:   ");
    scanf("%d", &p);
    int o = occur(arr, n - 1, p, 0, 0);

    return 0;
}
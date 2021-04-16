#include <stdio.h>

int main()
{
    int i, n, j;

    n = 4;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", (char)(j + 64));
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%c", (char)(j + 64));
        }
        printf("\n");
    }

    return 0;
}
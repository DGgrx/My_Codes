#include <stdio.h>
int main()
{
    int i, j, m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    for (j = 0; j <= m; j++)
    {
        if (j == 0 || j == m)
        {
            for (i = 0; i <= n; i++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            printf("*");
            for (i = 0; i <= n - 2; i++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    return(0);
}
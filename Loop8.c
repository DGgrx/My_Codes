/* Floyd's Triangle */
#include <stdio.h>
int main()
{
    int n, l = 1, j;
    printf("Enter the number of rows to be printed: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j >= 0; j++)
        {
            if (i == j)
            {
                break;
            }
            else
            {
                printf("%d ", l);
                l++;
            }
        }

        printf("\n");
    }
    return (0);
}

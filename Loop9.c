// Isosceles Triangle
#include <stdio.h>
int main()
{
    int n, k = 1;
    printf("Enter the number of rows to be printed: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space>=0; space--)
        {
            printf(" ");
        }
        for (int star = 1; star <= k; star++)
        {
            printf("*");
        }
        printf("\n");
        k += 2;
    }
}

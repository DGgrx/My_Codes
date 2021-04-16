#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int space = i - 1; space >= 1; space--)
        {
            printf(" ");
        }
        for (int star = n - i; star >= 0; star--)
        {
            printf("*");
        }
        printf("\n");
    }
    return (0);
}

#include <stdio.h>
#include <math.h>
int main()
{
    int a, n, i, j;
    int fact = 1;
    double m = 0, k = 0;
    printf("Enter the value of a - ");
    scanf("%d", &a);
    printf("Enter the value of n - ");
    scanf("%d", &n);
    for (i = 0; i < (n); i++)
    {
        for (j = 1; j <= i; j++)
        {
            fact *= j;
        }
        k = m;
        m = (pow(a, i) / fact);
        k = m + k;
    }
    printf("X = %.2lf ", k);
    return 0;
}
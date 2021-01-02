#include <stdio.h>
int main()
{
    float a, b, c;
    float A, B, C;
    printf("Enter the coefficients a,b and c of the first line respectively...\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("\nThe first line is %.1fx+%.1fy=%.1f\n\n", a, b, c);
    printf("Similarly, enter the coefficients of the second line...\n");
    scanf("%f %f %f", &A, &B, &C);
    printf("\nThe second line is %.1fx+%.1fy=%.1f\n\n", A, B, C);

    if (a / A != b / B)
    {
        printf("The lines are intersecting.");
    }
    else if (a / A == b / B, b / B == c / C, a / A == c / C)
    {
        printf("The lines are co-incident.");
    }
    else
    {
        printf("The lines are parallel.");
    }
    return (0);
}
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    printf("Enter the coefficients a,b and c of the quadratic equation\n {ax^2 + bx + c = 0}\n . . . ");
    scanf("%lf %lf %lf", &a, &b, &c);
    double X1, X2;
    X1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    X2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    if (((b * b) - (4 * a * c)) >= 0)
    {
        printf("Roots are = %.1lf %.1lf", X1, X2);
    }
    else
    {
        printf("The roots are imaginary.");
    }
    return (0);
}
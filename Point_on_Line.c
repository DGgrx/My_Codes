#include <stdio.h>
int main()
{
    float x, y;
    float a, b, c;
    printf("Enter the point as (X,Y)\n");
    printf("X=", x);
    scanf("%f", &x);
    printf("Y=", y);
    scanf("%f", &y);
    printf("The entered point is= (%.1f,%.1f)\n\n", x, y);
    printf("Enter the line as ax+by+c=0\n");
    printf("a=", a);
    scanf("%f", &a);
    printf("b=", b);
    scanf("%f", &b);
    printf("c=", c);
    scanf("%f", &c);
    printf("The entered line is %.1fx+%.1fy+%.1f=0\n\n", a, b, c);
    if (a * x + b * y + c == 0)
    {
        printf("The point lies on the line.");
    }
    else
    {
        printf("the point does not lie on the line.");
    }
    return (0);
}
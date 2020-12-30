#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d", a, b, c);
    printf("Enter the sides of the triangle");
    if (a <= b && a <= c)
    {
        d = a;
    }
    else if (b <= a && b <= c)
    {
        d = b;
    }
    else
    {
        d = c;
    }
    if ((d <= a && d <= b) || (d <= c && d <= b) || (d <= a && d <= c))
    {
        printf("Valid");
    }
    else
    {
        printf("invalid");
    }
    return(0);
}
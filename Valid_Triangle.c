#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the sides of the triangle. . .\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a < (b + c) && b < (a + c) && c < (b + a))
    {
        printf("The triangle is valid.");
    }
    else
    {
        printf("The triangle is invalid.");
    }
    return (0);
}

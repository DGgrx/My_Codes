#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    /*int q = year / 4;
    int r = year - (4 * q);
    This was Old Logic until i learnt about % operand*/  
    if (year % 4 == 0)
    {
        printf("The year %d is a leap year", year);
    }
    else
    {
        printf("The year %d is not a leap year", year);
    }
    return 0;
}
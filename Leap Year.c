#include<stdio.h>
int main()
{
    double year;
    printf("Enter the year : ");
    scanf("%lf",&year);
    int q=year/4;
    int r=year-(4*q);
    if(r==0)
    {
        printf("The year %.0lf is a leap year", year);
    }
    else
    {
        printf("The year %.0lf is not a leap year", year);
    }
    return(0);
}
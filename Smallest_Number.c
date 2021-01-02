#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter 3 numbers. . .\n");
    scanf("%f %f %f", &a,&b,&c);
    if(a<=b && a<=c)
    {
        d=a;
    }
    else if (c<=a && c<=b)
    {
        d=c;
    }
    else
    {
        d=b;
    }
    printf("The smallest number is %.1f", d);
    return(0);
}
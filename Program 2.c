#include<stdio.h>
int main()
{
    float x,y,z;
    float a,b,c;
    printf("Enter the point as (X,Y,Z)");
    printf("X=%.1f",x); scanf("%.1f",&x);
    printf("Y=%.1f",y); scanf("%.1f",&y);
    printf("Z=%.1f",z); scanf("%.1f",&z);
    printf("The entered point is= (%.1f,%.1f,%.1f)", x,y,z);
    printf("Enter the line as ax+by+c=0");
    printf("a=%.1f",a); scanf("%.1f",&a);
    printf("b=%.1f",b); scanf("%.1f",&b);
    printf("c=%.1f",c); scanf("%.1f",&c);
    printf("The entered line is %.1fx+%.1fy+%.1f=0", a,b,c);
    return(0);
}
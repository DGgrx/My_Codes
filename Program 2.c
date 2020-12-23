#include<stdio.h>
int main()
{
    float x,y,z;
    float a,b,c;
    printf("Enter the point as (X,Y,Z)\n");
    printf("X=",x); scanf("%f",&x);
    printf("Y=",y); scanf("%f",&y);
    printf("Z=",z); scanf("%f",&z);
    printf("The entered point is= (%.1f,%.1f,%.1f)\n\n", x,y,z);
    printf("Enter the line as ax+by+c=0\n");
    printf("a=",a); scanf("%f",&a);
    printf("b=",b); scanf("%f",&b);
    printf("c=",c); scanf("%f",&c);
    printf("The entered line is %.1fx+%.1fy+%.1f=0", a,b,c);
if(ax+by+cz==0)
    printf("The point lies on the line.");
    printf("the point does not lie on the line.");
    return(0);
}
#include<stdio.h>
int main()
{
    int a,b,c,d,e,rev;
    printf("Enter a 5-Digit Number - ");
    scanf("%d",&a);
    b=a/10000;
    a=a-b*10000;
    c=a/1000;
    a=a-c*1000;
    d=a/100;
    a=a-d*100;
    e=a/10;
    a=a-e*10;
    rev=10000*a+1000*e+100*d+10*c+b;
    printf("The Reversed number is - %d",rev);
return(0);
}
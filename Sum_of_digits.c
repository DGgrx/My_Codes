#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    printf("Enter a 5- Digit Number - ");
    scanf("%d",&a);
    b=a/10000;
    a=a-b*10000;
    c=a/1000;
    a=a-c*1000;
    d=a/100;
    a=a-d*100;
    e=a/10;
    a=a-e*10;
    sum=a+b+c+d+e;
    printf("Sum of digits is %d",sum);
return(0);

}
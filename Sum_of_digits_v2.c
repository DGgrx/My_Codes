#include<stdio.h>
int main()
{
    int  num,n,a;
    a=0;
    printf("Enter  a 5-digit number - ");
    scanf("%d",&num);

    n=num%10;
    num=num/10;
    a=a+n;

    n=num%10;
    num=num/10;
    a=a+n;

    n=num%10;
    num=num/10;
    a=a+n;

    n=num%10;
    num=num/10;
    a=a+n;

    n=num%10;
    num=num/10;
    a=a+n;
printf("The sum of digits is - %d\n",a);
return(0);
}
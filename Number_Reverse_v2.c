#include<stdio.h>
int main()
{
    int num,rev,a;
    printf("Enter a 5 Digit Number -");
    scanf("%d",&num);
    
    a=num%10;
    rev=a*10000;
    num=num/10;

    a=num%10;
    rev=rev+a*1000;
    num=num/10;
    
    a=num%10;
    rev=rev+a*100;
    num=num/10;
    
    a=num%10;
    rev=rev+a*10;
    num=num/10;
    
    a=num%10;
    rev=rev+a;
    
    printf("The reversed digit is %d",rev);
return(0);
}
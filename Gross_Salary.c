#include<stdio.h>
int main ()
{
    int salary, allow1, allow2, gross;
    printf("Enter the Salary -");
    scanf("%d",&salary);
    allow1=40/100.0*salary;
    allow2=20/100.0*salary;
    gross=salary+allow1+allow2;
    printf("Dearness allowance = %d\n",allow1);
    printf("House Rent allowance= %d\n",allow2);
    printf("Gross salary= %d\n",gross);
    return (0);
}
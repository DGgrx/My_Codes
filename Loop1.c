#include <stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter the number of columns: \n");
    scanf("%d",&m);
    printf("Enter the number of rows: \n");
    scanf("%d",&n);    
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= m; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
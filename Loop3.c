#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
   int k=n;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=k;j++)
        {
            printf("*");
        }
        k--;
        printf("\n");
        
    }
    return(0);

}
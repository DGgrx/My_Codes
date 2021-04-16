#include<stdio.h>
int main()
{
    int i,j,n;   
    int num;
    printf("Enter the Number of tables to be printed - ");
 scanf("%d",&n); 
    for(i=1; i<=10; i++) 
    {
        
        num= i;    
        for(j=1; j<=n; j++)
        {   
            printf("%3d\t",(num*j));
        }
  
        printf("\n"); 
    }
    return 0;
}







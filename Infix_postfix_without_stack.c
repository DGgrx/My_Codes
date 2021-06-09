#include <stdio.h>
#include <string.h>
int main()
{
    char infix[] = "a+b-c/d*e";
    printf("Infix is : %s \n", infix);
    int i = 0;
    while (i < strlen(infix) - 1)
    {
        if (infix[i] == '*')
        {
            infix[i] = infix[i + 1];
            infix[i + 1] = '*';
            i++;
        }
        else if (infix[i] == '+')
        {
            infix[i] = infix[i + 1];
            infix[i + 1] = '+';
            i++;
        }
        else if (infix[i] == '-')
        {
            infix[i] = infix[i + 1];
            infix[i + 1] = '-';
            i++;
        }
        else if (infix[i] == '/')
        {
            infix[i] = infix[i + 1];
            infix[i + 1] = '/';
            i++;
        }
        i++;
    }
    // for(int i = 0; i < strlen(arr); i++)
    printf("Postfix is : %s", infix);

    return 0;
}
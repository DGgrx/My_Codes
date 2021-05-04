#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

//isFull()
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//isEmpty()
int isFull(struct stack *ptr)
{
    if (ptr->top == (ptr->size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//push()
void push(struct stack *ptr, char val)
{
    if (isFull(ptr))
    {
        printf("The Stack is Full. Cannot push %c to the stack.\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

//pop()
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is Empty. Cannot pop from the stack.\n");
        return 0;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

//match() maatching if popping was successful or not
int match(char a, char b)
{
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    if (a == '(' && b == ')')
    {
        return 1;
    }
    return 0;
}

//Parenthesis matching using stack
int parenthesisMatch(char *exp)
{
    struct stack *sp;
    sp->size = strlen(exp);
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char popped_ch;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(sp, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(sp))
            {
                return 0;
            }
            popped_ch = pop(sp);
            if (!match(popped_ch, exp[i]))
            {
                return 0;
            }
        }
    }
    if (isEmpty(sp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *exp = "[{0()}]";

    if (parenthesisMatch(exp))
    {
        printf("The Parenthesis are Matching");
    }
    else
    {
        printf("The Parenthesis are not Matching");
    }

    return 0;
}

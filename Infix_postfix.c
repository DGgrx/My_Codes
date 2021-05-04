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
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("The Stack is Full. Cannot push %d to the stack.\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

//pop()
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is Empty. Cannot pop from the stack.\n");
        return 0;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

//printStack()
void printStack(struct stack *ptr)
{
    int i = 0;
    printf("\n\n######################\n");
    while (i != ptr->top + 1)
    {
        printf("%d \n", ptr->arr[i]);
        i++;
    }
    printf("######################\n\n");
}

//stackTop()
char stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

//precedence()
int precedence(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}

//isOperator()
int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}

//InfixtoPostfix()
char *infixToPostfix(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = strlen(infix);
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc(((strlen(infix) + 1) * sizeof(char)));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i]) > precedence(stackTop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char *infix = "a+b-5/7";
    printf("Infix is: %s\n", infix);
    printf("Postfix is: %s", infixToPostfix(infix));

    return 0;
}

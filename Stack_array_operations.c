#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
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
int pop(struct stack *ptr)
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

//peek()
int peek(struct stack *ptr, int index)
{
    int arrayInd = ptr->top - index + 1;
    if (isEmpty(ptr))
    {
        printf("The stack is empty. Nothing to peek into !\n");
    }
    else if (arrayInd < 0)
    {
        printf("Invalid Index !\n");
        return 0;
    }

    else
    {
        return ptr->arr[arrayInd];
    }
}

//stackTop()
int stackTop(struct stack *ptr)
{
    return ptr->arr[ptr->top];
}

//stackBottom()
int stackBottom(struct stack *ptr)
{
    return ptr->arr[0];
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    printf("Enter the size of the Stack: ");
    scanf("%d", &(s->size));
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("Stack has been created successfully.\n");

    int numb;
    int val;
    int index;
repeat:
    printf("\n######################\n");
    printf("Press 1 to push.\nPress 2 to pop.\nPress 3 to Check if stack isEmpty.\nPress 4 to
     check if stack isFull.\nPress 5 to print the stack.\nPress 6 to peek into the 
     Stack.\nPress 7 to get the Top element.\n Press 8 to get the Bottom 
     element.\nPress 0 to exit.\n :: ");
    scanf("%d", &numb);
    printf("\n######################\n\n");

    switch (numb)
    {
    case 1:
        printf("Enter the value to be pushed: ");
        scanf("%d", &val);
        push(s, val);
        break;
    case 2:
        printf("The value %d is popped from the stack.\n", pop(s));
        break;
    case 3:
        if (isEmpty(s))
        {
            printf("The stack is empty\n");
        }
        else
        {
            printf("The stack is not empty\n");
        }
        break;
    case 4:
        if (isFull(s))
        {
            printf("The stack is Full.\n");
        }
        else
        {
            printf("The stack is not Full.\n");
        }
        break;
    case 5:
        printStack(s);
        break;
    case 6:
        printf("Enter the Index you wanna peek: ");
        scanf("%d", &index);
        printf("\nThe value at index %d is %d.\n", index, peek(s, index));
        break;
    case 7:
        printf("The Value at the Top of the Stack is %d", stackTop(s));
        break;
    case 8:
        printf("The value at the bottom of the stack is %d", stackBottom(s));
        break;
    case 0:
        return 0;
    default:
        return 0;
    }
    goto repeat;

    return 0;
}
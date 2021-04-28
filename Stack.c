#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

//isEmpty()
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

//ifFull()
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

int main()
{
    // struct stack s;
    // s.size=80;
    // s.top=-1;
    // s.arr=(int *)malloc(s.size*sizeof(int));

    //Defining a pointer to a stack would be more feasible because then we will be able to
    //pass this stack to functions
    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    //Manually pushing elemnt in the stack
    s->arr[0] = 7;
    s->top++;

    //Checking if the stack is empty or not
    if (isEmpty(s))
    {
        printf("The stack is empty.\n");
    }
    else
    {
        printf("The stack is not empty.\n");
    }

    //Checking if the stack is full or not
    if (isFull(s))
    {
        printf("The stack is full.\n");
    }
    else
    {
        printf("The stack is not full.\n");
    }

    return 0;
}
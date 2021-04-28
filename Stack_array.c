#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

//isEmpty() - checks if the stack is empty or not
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

//ifFull() - checks is the stack is full or not
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

    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    //Manually pushing elemnt in the stack
    s->arr[0] = 7;
    s->top++;

    //push() - pushes the element to the top of the array
    void push(struct stack * ptr, int val)
    {
        if (isFull(ptr))
        {
            printf("Stack is Full.\n");
        }
        else
        {
            ptr->top++;
            ptr->arr[ptr->top] = val;
        }
    }

    //pop() - removes the top value from the array
    int pop(struct stack * ptr)
    {
        if (isEmpty(ptr))
        {
            printf("The Stack is already Empty.\n");
        }
        else
        {
            int val = ptr->arr[ptr->top];
            ptr->top--;
            return val;
        }
    }

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
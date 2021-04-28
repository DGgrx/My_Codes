#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//Globally declaring the variable so that any changes that happen to top are global
//struct node* top=NULL;

//pop() with global top
// int pop(struct node *tp)
// {
//     if (isEmpty(tp))
//     {
//         printf("The stack is Full. Cannot pop anything !");
//     }
//     else
//     {
//         struct node *p = tp;
//         top = tp->next;
//         int x = p->data;
//         free(p);
//         return x;
//     }
// }

//isEmpty()
int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//isFull()
int isFull(struct node *top)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//push()
struct node *push(struct node *top, int val)
{
    if (isFull(top))
    {
        printf("The stack is Full. Cannot Push %d\n", val);
    }
    else
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        ptr->data = val;
        printf("%d was pushed successfully.\n", ptr->data);
        ptr->next = top;
        top = ptr;
        return top;
    }
}

//pop()
int pop(struct node **top)
{
    if (isEmpty(*top))
    {
        printf("The stack is empty. Nothing to be popped out of !");
    }
    else
    {
        struct node *n = (*top);
        (*top) = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

//printStack() - LinnkedListtraversal()
void printStack(struct node *top)
{
    struct node *ptr = top;
    printf("\n\n######################\n");
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
    printf("######################\n\n");
}

int main()
{
    struct node *top = NULL;
    int numb;
    int val;
repeat:
    printf("\n######################\n");
    printf("Press 1 to push.\nPress 2 to pop.\nPress 3 to Check if stack isEmpty.\nPress 4 to check if stack isFull.\nPress 5 to print the stack.\nPress 6 to peek into the Stack.\nPress 7 to get the Top element.\nPress 8 to get the Bottom element.\nPress 0 to exit.\n :: ");
    scanf("%d", &numb);
    printf("\n######################\n\n");

    switch (numb)
    {
    case 1:
        printf("Enter the value to be pushed: ");
        scanf("%d", &val);
        top = push(top, val);
        break;
    case 2:
        printf("The value %d is popped from the stack.\n", pop(&top));

        //pop() called using a global variable
        //printf("The value %d is popped from the stack.\n", pop(top));

        //Address is sent along with top cuz we have to change the top too
        //To prevent sending the address of the top variable. Create a global top structure so that way the changes taht will happen to top will be global.
        break;
    case 3:
        if (isEmpty(top))
        {
            printf("The stack is empty\n");
        }
        else
        {
            printf("The stack is not empty\n");
        }
        break;
    case 4:
        if (isFull(top))
        {
            printf("The stack is Full.\n");
        }
        else
        {
            printf("The stack is not Full.\n");
        }
        break;
    case 5:
        printStack(top);
        break;
    // case 6:
    //     printf("Enter the Index you wanna peek: ");
    //     scanf("%d", &index);
    //     printf("\nThe value at index %d is %d.\n", index, peek(s, index));
    //     break;
    // case 7:
    //     printf("The Value at the Top of the Stack is %d", stackTop(s));
    //     break;
    // case 8:
    //     printf("The value at the bottom of the stack is %d", stackBottom(s));
    //     break;
    case 0:
        return 0;
    default:
        return 0;
    }
    goto repeat;

    return 0;
}
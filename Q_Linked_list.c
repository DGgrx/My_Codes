#include <stdio.h>
#include <stdlib.h>

//Declaring the node structure
struct node
{
    int data;
    struct node *next;
};

//Declaring the front and the rear node so that we do not have to pass them to functions
struct node *f = NULL;
struct node *r = NULL;

//isEmpty()
int isEmpty()
{
    if (f == NULL && r == NULL)
        return 1;

    return 0;
}

//traversal of the linked list
void traversal(struct node *ptr)
{
    int i = 0;
    while (ptr != NULL)
    {
        printf("Element %d : %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}

//enque()
void enque(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("The Q is Full !!\n");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        r->next = n;
        if (isEmpty())
        {
            f->next = n;
            r->next = n;
            
        }
        r = n;
    }
}

int main()
{
    enque(45);
    enque(78);
    traversal(f);
    return 0;
}
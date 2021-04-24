// Creation and Traversal of a linked list

#include <stdio.h>
#include <stdlib.h>

//Creating a structure node
struct node
{
    int data;
    struct node *next;
};

//traversing the linked list
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


int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    //linking head and second
    printf("Enter the data for head node: ");
    scanf("%d", &(head->data));
    head->next = second;

    //linking second and third
    printf("Enter the data for Second node: ");
    scanf("%d", &(second->data));
    second->next = third;

    //linking third and fourth
    printf("Enter the data for third node: ");
    scanf("%d", &(third->data));
    third->next = fourth;

    //linking fourth and NULL
    printf("Enter the data for fourth node: ");
    scanf("%d", &(fourth->data));
    fourth->next = NULL;

    traversal(head);

    return (0);
}
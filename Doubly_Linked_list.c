#include <stdio.h>
#include <stdlib.h>

//declaring the node type
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

//Traversing the Doubly Linked List
void traversal(struct node *head)
{
    struct node *ptr = head;

    printf("\nThe Doubly Linked List in order is: \n");
    while (ptr->next != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("Element : %d\n", ptr->data);

    printf("\nThe Doubly Linked List in reverse is: \n");
    while (ptr->prev != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = (ptr->prev);
    }
    printf("Element : %d\n", ptr->data);
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    //Linking head to prev Null and next second
    head->prev = NULL;
    head->data = 12;
    head->next = second;

    //Linking second to prev head and next third
    second->prev = head;
    second->data = 23;
    second->next = third;

    // Linking third to prev second and next fourth
    third->prev = second;
    third->data = 34;
    third->next = fourth;

    //linking fourth to prev third and next NULL
    fourth->prev = third;
    fourth->data = 21;
    fourth->next = NULL;

    traversal(head);

    return 0;
}

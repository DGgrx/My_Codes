#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// Traversing the circular linked list
void traversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("Element: %d\n", (ptr->data));
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    //Linking head and second
    head->data = 12;
    head->next = second;

    //Linking second and third
    second->data = 23;
    second->next = third;

    //Linkning third and fourth
    third->data = 45;
    third->next = fourth;

    //Linking fourth and head (Circular)
    fourth->data = 10;
    fourth->next = head;

    traversal(head);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//Traversing the linked list
void traversal(struct node *p)
{
    int i = 0;
    while (p != NULL)
    {
        printf("Element %d : %d\n", i, p->data);
        p = p->next;
        i++;
    }
}

// Deleting the first node
struct node *deleteHead(struct node *head)
{
    struct node *p = head;
    head = head->next;
    free(p);
    return head;
}

// Deleting a node at index
struct node *deleteAtIndex(struct node *head, int index)
{
    struct node *p = head;
    int i = 0;
    while (i != index - 2)
    {
        p = p->next;
        i++;
    }
    struct node *q = p->next;
    p->next = q->next;
    free(q);
    return (head);
}
//This logic has a problem that we cannot delete node number 0 and 1

// NEW LOGIC
struct node *deleteAtIndexN(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Deleting the end node
struct node *deleteEndNode(struct node *head)
{
    struct node *p = head;
    int i = 0;
    while (((p->next)->next) != NULL)
    {
        p = p->next;
        i++;
    }
    struct node *q = p->next;
    p->next = NULL;
    free(q);
    return head;
}
//This logic also has some possible case problems even tho we just have to delete the last node

//NEW LOGIC
struct node *deleteEndNodeN(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; q->next != NULL; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

// Deleting a particular value
struct node *deleteValue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; q->data != value && q->next != NULL; i++)
    {
        p = p->next;
        q = q->next;
    }
    if ((q->data) == value)
    {
        p->next = q->next;
        free(q);
    }
    else
    {
        printf("Value not found in the linked list.");
    }
    return head;
}
//This cannot delete the very first node and t do that we aould have to use the delete head
//node function that we created above.

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data for head node: ");
    scanf("%d", &(head->data));
    head->next = second;

    printf("Enter the data for head node: ");
    scanf("%d", &(second->data));
    second->next = third;

    printf("Enter the data for head node: ");
    scanf("%d", &(third->data));
    third->next = fourth;

    printf("Enter the data for head node: ");
    scanf("%d", &(fourth->data));
    fourth->next = NULL;

    printf("\nLinked List before Deletion\n");
    traversal(head);
    printf("\nLinked List after Deletion\n");
    // head = deleteHead(head);
    // head = deleteAtIndexN(head, 2);
    // head = deleteEndNodeN(head);
    // head = deleteValue(head, 34);
    traversal(head);

    return 0;
}
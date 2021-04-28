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

//deleting the head node
struct node *deleteHeadNode(struct node *head)
{
    struct node *p = head;
    struct node *q = head;
    while (q->next != head)
    {
        q = q->next;
    }
    head = head->next;
    q->next = head;
    free(p);
    return head;
}

//Deleting a Particular node at index
struct node *deleteAtIndex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i != (index-1); i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
//Does not delete the head node


//Deleting the end node
struct node* deleteEndNode(struct node*head)
{
    struct node*p=head;
    struct node*q=head->next;
    for(int i=0;q->next!=head;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}


//Deleting a particular Value
struct node* deleteParticularVal(struct node* head, int value)
{
    struct node*p=head;
    struct node*q=head->next;
    for(int i=0;q->data!= value;i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
//Does not delete the head node

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

    printf("\nCircular Linked List before Insertion: \n");
    traversal(head);

    printf("\nCircular Linked List after Insertion: \n");
    // head = deleteHeadNode(head);
    // head= deleteAtIndex(head, 1);
    // head= deleteEndNode(head);
    // head= deleteParticularVal(head, 23);
    traversal(head);

    return 0;
}
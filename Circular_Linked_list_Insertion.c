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

//Inserting at head node
struct node *insertAtHead(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return ptr;
}

//Insert at between
struct node *insertAtBetween(struct node *head, int index,int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    for (int i = 0; i != index - 1; i++)
    {
        p = p ->next;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

//Insert at the end node
struct node* insertAtEnd(struct node* head,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    for(int i=0;p->next!=head;i++)
    {
        p=p->next;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

//Insert after a particular node
void insertAfterNode(struct node* particularNode, int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr-> data=data;
    ptr->next=particularNode->next;
    particularNode->next=ptr;   
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 23;
    second->next = third;

    third->data = 45;
    third->next = fourth;

    fourth->data = 10;
    fourth->next = head;

    printf("\nCircular Linked List before Insertion: \n");
    traversal(head);
    printf("\nCircular Linked List after Insertion: \n");
    
    // head = insertAtHead(head, 67);
    // head= insertAtBetween(head, 3,56);
    // head= insertAtEnd(head, 76);
    // insertAfterNode(third, 67);

    traversal(head);

    return 0;
}
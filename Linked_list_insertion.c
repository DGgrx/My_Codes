#include <stdio.h>
#include <stdlib.h>
//Declaring the node structure
struct node
{
    int data;
    struct node *next;
};

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
//Insert a node at the beginning
struct node *insertAtBegin(struct node *head)
{
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for new head node: ");
    scanf("%d", &(ptr->data));
    ptr->next = head;
    return ptr;
}

//Inserting a node in between or at an index
struct node *insertAtBw(struct node *head, int index)
{
    struct node *ptr;
    struct node *p = head;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for new node: ");
    scanf("%d", &(ptr->data));
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Inserting a node at the end 
struct node * insertAtEnd(struct node* head)
{
     struct node *ptr;
    struct node *p = head;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data for new end node: ");
    scanf("%d", &(ptr->data));
    int i=0;
    while((p->next)!=NULL)
    {
        p=p->next;
        i++;
    }
    ptr->next=NULL;
    p->next=ptr;
    return head;
}

// Inserting a node after a node 
struct node* insertAfterNode()
{

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
    // head = insertAtBegin(head);
    // traversal(head);
    // head= insertAtBw(head,4);
    head=insertAtEnd(head);
    traversal(head);

    return (0);
}

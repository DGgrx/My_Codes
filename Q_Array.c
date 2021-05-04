#include <stdio.h>
#include <stdlib.h>

//Implementing the Q
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

//isFull() - Check if queue is Full or not
int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
        return 1;

    return 0;
}

//isEmpty() - Check is the queue is Empty or not
int isEmpty(struct queue *q)
{
    if (q->f == q->r)
        return 1;

    return 0;
}

//enque() - This will add elements in the Q
void enque(struct queue *q, int val)
{
    if (isFull(q))
    {
        printf("This Queue is Full !\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}

//deque() - This will delete element from the queue
int deque(struct queue *q)
{
    int a;
    if (isEmpty(q))
    {
        printf("The Q is empty. Cannot Dequeue !\n");
        return 0;
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

//printQ()
void printQ(struct queue *q)
{
    int point = q->f;
    while (point != q->r)
    {
        point++;
        printf("Element : %d\n", q->arr[point]);
    }
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 20;
    q->f = -1;
    q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    if (isEmpty(q))
    {
        printf("The Q is Empty.\n");
    }
    else
    {
        printf("The Q is not Empty.\n");
    }

    enque(q, 67);
    enque(q, 89);
    printQ(q);
    printf("The value %d is Dequeued !\n", deque(q));
    printf("The value %d is Dequeued !\n", deque(q));

    if (isEmpty(q))
    {
        printf("The Q is Empty.\n");
    }
    else
    {
        printf("The Q is not Empty.\n");
    }
    return 0;
}

/* Q using arrya has a drawback that :
 1. the space is not used efficiently (Due to the way we have created the Q if we fill the array
    and then empty is again the size of our q will be diminshed.)
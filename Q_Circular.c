#include <stdio.h>
#include <stdlib.h>

//The most important concept in implementing the circular queue is the circular incrementation

//Implementing the Q
struct circular_q
{
    int size;
    int f;
    int r;
    int *arr;
};

//isFull() - Check if queue is Full or not
int isFull(struct circular_q *q)
{
    if ((q->r + 1) % q->size == q->f)
        return 1;

    return 0;
}

//isEmpty() - Check is the queue is Empty or not
int isEmpty(struct circular_q *q)
{
    if (q->f == q->r)
        return 1;

    return 0;
}

//enque() - This will add elements in the Q
void enque(struct circular_q *q, int val)
{
    if (isFull(q))
    {
        printf("This Queue is Full !\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size; //Circular incrementation
        q->arr[q->r] = val;
    }
}

//deque() - This will delete element from the queue
int deque(struct circular_q *q)
{
    int a;
    if (isEmpty(q))
    {
        printf("The Q is empty. Cannot Dequeue !\n");
        return 0;
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

//printQ()
void printQ(struct circular_q *q)
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
    struct circular_q *q = (struct circular_q *)malloc(sizeof(struct circular_q));
    q->size = 20;
    q->f = 0; // This should be set to 0 instead of -1 because the circular incrementation
    q->r = 0; // will not give a remainder of -1 at any cost.
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

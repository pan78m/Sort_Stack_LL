// Circular Queue implementation in C

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int items[SIZE];
int front = -1, rear = -1;

// Check if the queue is full
// int isFull()
// {
//     if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
//         return 1;
//     return 0;
// }

// // Check if the queue is empty
// int isEmpty()
// {
//     if (front == -1)
//         return 1;
//     return 0;
// }

// Adding an element
void enQueue()
{
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
        printf("\n Queue is full!! \n");
    else
    {
        int value;

        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        printf("\nwhich value enqueue :\n");
        scanf("%d", &value);
        items[rear] = value;
        printf("\n Inserted -> %d", value);
    }
}

// Removing an element
int deQueue()
{
    int value;
    if (front == -1)
    {
        printf("\n Queue is empty !! \n");
        return (-1);
    }
    else
    {
        value = items[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        // Q has only one element, so we reset the
        // queue after dequeing it. ?
        else
        {
            front = (front + 1) % SIZE;
        }
        printf("\n Deleted element -> %d \n", value);
    }
}

// Display the queue
void Display()
{
    int i;
    if (front == -1)
        printf(" \n Empty Queue\n");
    else
    {
        printf("\n Front -> %d ", front);
        printf("\n Items -> ");
        for (i = front; i != rear; i = (i + 1) % SIZE)
        {
            printf("%d  ", items[i]);
        }
        printf("%d ", items[i]);
        printf("\n Rear -> %d \n", rear);
    }
}

int main()
{
    int n;
    while (1)
    {
        printf("\nAll Item Here!!\n");
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");

        printf("\nchoice any item for above.\n");
        scanf("%d", &n);
        switch (n)
        {

        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:

            Display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid Choice.\n");
            break;
        }
    }
    return 0;
}

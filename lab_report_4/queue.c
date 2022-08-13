#include <stdio.h>
#include <stdlib.h>
#define max 10
int queue[max];
char rear = -1;
char front = -1;

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-08-07 (17:11)
 *
 * @returns int
 */
void Push()
{
    if (rear == max - 1)
    {
        printf("\noverflow\n");
    }
    else
    {
        int value;
        printf("\nEnter the value which push in queue:\n");
        scanf("%d", &value);
        queue[rear] = value;
        rear = rear + 1;
        printf("push value:%d\n", queue[rear]);
    }
}
void Pop()
{

    if (front == -1 || front > rear)
    {
        printf("Queue Underflow \n");
        printf("\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
            printf("pop element : %d", queue[front]);
            front = front + 1;
        }
        printf("\n");
    }
}
void Display()
{
    if (front == -1)
    {
        printf("Queue is empty \n");
        printf("\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
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
            Push();
            break;
        case 2:
            Pop();
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

// if (front == -1)
//     front = 0;
// printf("Inset the element in queue : ");
// scanf(" %c", &item);
// rear = rear + 1;
// queue_array[rear] = item;
// printf("\n");

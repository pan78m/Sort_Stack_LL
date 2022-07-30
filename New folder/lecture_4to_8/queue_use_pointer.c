#include <stdio.h>
#include <stdlib.h>
#define n 5
void input(int a[], int *rare, int *front)
{
    int item;
    if (*rare == n - 1)
    {
        printf("overflow the queue.\n");
    }
    else
    {         *front=0;       
            printf("\ninput item value:\n");
            scanf(" %d", &item);
            *rare = *rare + 1;
            a[*rare] = item;
            printf("\n");
    }
}
void delete (int a[], int *rare, int *front)
{
    if (*front == -1 || *front > *rare)
    {
        printf("\noverflow\n");
    }
    else
    {
        printf("\n delete the item:%d ", a[*front]);
        *front = *front + 1;
        printf("\n");
    }
}
void display(int a[], int *rare, int *front)
{
    //int i = 0;
    if (*front == -1)
    {
        printf("\nthis queue is full.\n");
    }

    for (int i = *front; i <= *rare; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    int choice, rare = -1, front = -1, a[n];
    while (1)
    {
        printf("\n1.Input value.\n2.delete value.\n3.display.\n4.exit");
        printf("\nenter your choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            input(a, &rare, &front);
            break;
        case 2:
            delete (a, &rare, &front);
            break;
        case 3:
            display(a, &rare, &front);
            break;
        case 4:
            exit(1);
            break;

        default:
            printf("\nwronge choice!\n");
            break;
        }
    }
}

#include <stdio.h>
#include <stdlib.h>
#define n 10
void input(char a[], char *rare, char *front)
{
    char value;
    if (*rare == n - 1)
    {
        printf("\nalready the queue is full!\n");
    }
    else
    {
        *front = 0;
        printf("\nenter number:\n");
        scanf(" %c", &value);
        printf("inserted value is: %c", value);
        (*rare)++;
        a[*rare] = value;
    }
}
void delete (char a[], char *rare, char *front)
{
    if (*front == -1 || *front > *rare)
    {
        printf("\nthe queue is empty!\n");
    }
    else
    {

        printf("\ndelete the value is:%c ", a[*front]);
        (*front)++;
    }
}
void display(char a[], char *rare, char *front)
{
    if (*front == -1)
    {
        printf("\nthe queue is empty!\n");
    }
    else
    {
        for (int i = *front; i <= *rare; i++)
        {
            printf("%c ", a[i]);
        }
    }
}
int main()
{
    int ch;
    char rare = -1, front = -1, a[n];
    while (1)
    {
        printf("\n1.input\n2.delete\n3.display\n4.exit");
        printf("\nchoice your number:\n");
        scanf("%d", &ch);
        switch (ch)
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
            printf("wronge choice!\n");
            break;
        }
    }
}
#include <stdio.h>
#include <stdlib.h>
#define max 10
// int max=10;
int top;
int stack[max];

/**
 * @brief description
 * @author Pankaj Mahanto (213902002) <aryanpankaj78@gmail.com>
 * @date 2022-08-07 (17:11)
 *
 * @returns int
 */
void Push()
{
    if (top == max)
    {
        printf("\noverflow\n");
    }
    else
    {
        int value;
        printf("\nEnter the value which push in stack:\n");
        scanf("%d", &value);
        top = top + 1;
        stack[top] = value;
        printf("push value:%d\n", stack[top]);
    }
}
void Pop()
{
    if (top == -1)
    {
        printf("\nempty\n");
    }
    else
    {
        int value=stack[top];
        printf("pop value:%d\n", value);
        top = top - 1;
    }
}
void Display()
{
    int i;
    for (i = top; i > 0; i--)
    {
        printf("%d ", stack[i]);
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
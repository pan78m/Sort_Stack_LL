#include <stdio.h>
#include<stdlib.h>
#define n 5
int top = -1;
int stack[n];
void push()
{
    if (top == n - 1)
    {
        printf("\n overflow\n");
    }
    else
    {
        int value;
        printf("\n enter the value which inserted:");
        scanf("%d", &value);
        top=top+1;
        stack[top] = value;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\n the stack is empty\n");
    }
    else
    {
        printf("\n popped element:%d", stack[top]);
        top=top-1;
    }
}
void display()
{
    if (top == -1)
    {
        printf("\n empty\n");
    }
    else
    {
        printf("\n display this item\n");
        for (int i = top; i >= 0; --i)
        {
            printf("%d  ", stack[i]);
        }
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n choice below here one item.\n");
        printf("\n1.push\n2.pop\n3.display\n4.exit");
        printf("\nenter which item selected\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("\n invalid\n");
            break;
        }
    }
}
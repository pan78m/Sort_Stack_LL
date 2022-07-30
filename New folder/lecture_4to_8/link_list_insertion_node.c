#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printlist(struct node *n)
{
    int count = 0;
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
        count++;
    }
    printf("\ntotal element=%d\n", count);
}
// add node before head 4 steps
void push(struct node **head, int value)
{
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node)); // 1
    new_node->data = value;                                // 2
    new_node->next = *head;                                // 3
    *head = new_node;                                      // 4
}
// add node previous node insert 5 steps
void insertafter(struct node *pre_node, int value)
{
    if (pre_node == NULL) // 1
    {
        printf("the given previous node not null\n");
        return;
    }
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node)); // 2
    new_node->data = value;                                // 3
    new_node->next = pre_node->next;                       // 4
    pre_node->next = new_node;                             // 5
}
// insert value end we need 6 steps
void insertend(struct node *head, int value)
{
    struct node *new_node;
    struct node *last;
    new_node = (struct node *)malloc(sizeof(struct node)); // 1
    last = head;
    new_node->data = value; // 2
    new_node->next = NULL;  // 3
    if (head == NULL)       // 4
    {
        head = new_node;
        return;
    }
    while (last->next != NULL) // 5
        last = last->next;
    last->next = new_node; // 6
    return;
}
int main()
{
    int count;
    struct node *head = NULL;
    push(&head, 5);
    push(&head, 4);
    insertafter(head->next, 13);
    insertend(head, 9);
     
    printf("\nprint the link list value:");
    printlist(head);
    return 0;
}
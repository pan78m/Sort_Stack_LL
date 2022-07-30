#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printlist(struct node *n)
{   int count=0;
    while (n != NULL)
    {
        printf("%d ", n->data);
        n = n->next;
        count++;
    }
    printf("\ntotal num:%d\n",count);
}
// void insertfirst(struct node **head, int value)
// {
//     struct node *new_node;
//     new_node = (struct node *)malloc(sizeof(struct node));
//     new_node->data = value;
//     new_node->next = *head;
//     *head = new_node;
// }

int main()
{   int a;
    struct node *head = NULL;
    struct node *third = NULL;
    struct node *second = NULL;
    // memory allocation
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    // declare the assign value every node
    head->data = 7;
    head->next = second;
    // declare second node
    second->data = 9;
    second->next = third;
    printf("\nwhich value do you insert:\n");
    scanf("%d",&a);
    insertfirst(&head, a); // push front of the list
    // declare 3rd node
    third->data = 15;
    third->next = NULL;
    printlist(head);
    return 0;
}
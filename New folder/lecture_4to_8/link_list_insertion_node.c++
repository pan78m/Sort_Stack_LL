#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void printlist(node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
void push(node **head, int new_data)
{
    node *new_node;
    new_node = new node();
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}
// needed 5 steps in after any nodes
void insertafter(node *pre_node, int new_data)
{
    if (pre_node == NULL) // 1
    {
        cout << "given node previous node is null";
        return;
    }
    node *new_node;
    new_node = new node();           // 2
    new_node->data = new_data;       // 3
    new_node->next = pre_node->next; // 4
    pre_node->next = new_node;       // 5
}
void insertend(node *head, int value)
{
    node *new_node;
    node *last;
    new_node = new node();
    last = head;
    new_node->data = value;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
        last->next = new_node;
        return;
    }
}
int main()
{
    int a, b, c;
    node *head;
    head = NULL;
    cout << "\enter which value add front:\n";
    cin >> a;
    push(&head, a);
    cin >> b;
    insertend(head, b);
    cin >> b;
    push(&head, b);
    cin >> c;
    insertafter(head->next, c);
    printf("\n print the link list value:");
    printlist(head);
}
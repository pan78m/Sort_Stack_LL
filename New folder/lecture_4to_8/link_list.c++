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
int main()
{
    node *head = NULL;
    node *third = NULL;
    node *second = NULL;
    // memory allocation
    head = new node();
    second = new node();
    third = new node();
    // declare the assign value every node
    head->data = 7;
    head->next = second;
    // declare second node
    second->data = 9;
    second->next = third;
    // declare 3rd node
    third->data = 15;
    third->next = NULL;
    printlist(head);
    // cout<<head->data<<second->data<<third->data<<endl;
    return 0;
}
#include <cstdlib>
#include <iostream>

using namespace std;

class Node 
{
    public:
        int data;
        Node * next;
}

void push(Node ** head_ref, int new_data)
{
    Node * new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
    
}

int getCount(Node* node)
{
    if (node == nullptr)
    {
        return 0;
    } else 
    {
        return 1 + getCount(node->next); //recursive method 
        //uses if else 
    }
}

int main()
{
    Node * head = nullptr;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);

    cout << "Count of nodes is " <<getCount(head);
}
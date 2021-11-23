#include <iostream>
#include <cstdlib>


class Node 
{
    public:
    int key;
    Node* next;
}


void push(Node** head_ref, int new_data)
{
    Node * new_node = new Node();

    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

bool search(Node* head, int x)
{
    Node* current = head;
    while(current != nullptr)
    {
        if(current->key == x)
        {
            return true;
        }else{
             current=current->next;
             return false;
        }
    }
}int main()
{
    Node* head = nullptr;

    int x = 21;

    push(&head,0);
    push(&head,12);
    push(&head,21);
    push(&head,35);
    push(&head,49);

    search(head, x) ? cout << "Yes" : cout << "No"; //ternary expression 
    return 0; 
}
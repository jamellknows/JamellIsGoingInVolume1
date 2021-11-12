//Given a ref ** to the head of a list and an inte add a new node at the end 
#include <cstddef>
void append(Node ** head_ref, int new_data)
{
    Node * new_node = new Node();

    Node *last = *head_ref;

    new_node -> data = data;

    new_node -> next = nullptr;

    //if the linked list is empty make new node the head
    
    if(*head_ref = nullptr)
    {
        *head_ref = new_node;
        return;
    }

    while(last->next != nullptr)
    {
        last = last -> next;

    }

    last -> next = new_node;
    return;
}
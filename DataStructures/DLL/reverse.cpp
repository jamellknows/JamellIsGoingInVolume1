#include <iostream>
#include <cstdlib>

using namespace std;

class Node 
{
    public: 
    int data;
    Node * prev;
    Node * next;
};

void reverse(Node ** head_ref)
{
    Node * temp = nullptr;
    Node * current = *head_ref;

    while(current != nullptr)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if(temp != nullptr)
    {
        *head_ref = temp->prev;

    }

}

void push(Node ** head_ref, int new_data)
{
    //Insetion at the begining
    Node * new_node = new Node();

    new_node->data = new_data;
    new_node->prev = nullptr;
    new_node->next = *head_ref;
    if(*head_ref != nullptr)
    {
        (*head_ref)->prev = new_node;
    }
    *head_ref = new_node;

}

void printList(Node * node)
{
    while(node != nullptr)
    {
        cout << node->data << " ";
        node= node->next;
    }
}

int main()
{
    Node * head = nullptr;
    push(&head, 24);
    push(&head, 23);
    push(&head, 22);
    push(&head, 21);
    cout << " Original Linked List" << endl;
    printList(head);
    reverse(&head);
    cout << "The reversed Linked List"<<endl;
    printList(head);
}
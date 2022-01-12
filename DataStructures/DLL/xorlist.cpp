#include <cstdlib>
#include <cinttypes>
#include <iostream>

using namespace std;

class Node{
    public: 
    int data;
    Node * npx; // Xor of next or previous
};

Node * XOR(Node * a, Node * b)
{
    return reinterpret_cast<Node *>(reinterpret_cast<uintptr_t>(a)^reinterpret_cast<uintptr_t>(b));
}

void insert(Node ** head_ref, int new_data)
{
    Node * new_node = new Node();
    new_node -> data = new_data;
    //since new node is inserted at the beginning, npx of new node 
    // will be the xor of current head and null 
    new_node->npx = *head_ref;
    if(*head_ref != nullptr)
    {
        (*head_ref)->npx = XOR(new_node, (*head_ref)->npx);
    }
    *head_ref = new_node;
}

void printList(Node * head)
{
    Node * curr = head;
    Node * prev = nullptr;
    Node * next;

    cout << " The folowing are nodes of the linked list \n ";
    while(curr != nullptr)
    {
        cout << curr->data << " ";
        next = XOR(prev, curr->npx);
        prev = curr;
        curr = next;
    }
}

int main () 
{ 
    /* Create following Doubly Linked List 
    head-->40<-->30<-->20<-->10 */
    Node *head = NULL; 
    insert(&head, 10); 
    insert(&head, 20); 
    insert(&head, 30); 
    insert(&head, 40); 

    // print the created list 
    printList (head); 

    return (0); 
} 
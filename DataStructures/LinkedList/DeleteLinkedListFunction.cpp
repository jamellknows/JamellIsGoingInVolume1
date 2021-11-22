#include <iostream>
#include <cstdlib>
using namespace std;
class Node 
{
    public: 
    int data;
    Node* next;
};

//when you pass a pointer of a pointer it gives acces to the pointer
// when you pass a pointer it gives access to the variable
void deleteList(Node** head_ref)
{
    cout << "Deleting List: ";

    Node* tnode = *head_ref;
    while(tnode != nullptr)
    {
        cout << tnode->data << " ";
        tnode= tnode->next;
    }

    Node* current = *head_ref;
    Node* next = nullptr;

    while(current !=nullptr)
    {
        next = current->next;
        free(current);
        current = next;
    }
    //deref head ref
    *head_ref = nullptr;
    cout << "\nList Deleted";

}

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node-> data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

int main()
{
    Node* head = nullptr;

    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);

    cout << "Delete linked list";
    deleteList(&head);
    
}
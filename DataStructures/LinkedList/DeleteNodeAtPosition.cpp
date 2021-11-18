#include <iostream>
#include <cstdlib>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};
//Given a ref (pointer to pointer) ** or *& (I think)
// to the head of a list and an int 
// inserts a new node to the front of the list 
void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void deleteNode(Node ** head_ref, int position)
{

    //If linked list is empty 
    if(*head_ref == nullptr)
    {
        return;
    }

    Node * temp = *head_ref;

    if(position == 0)
    {
        *head_ref = temp->next;

        free(temp);
        return;
    }

    // find previous node of the node to be deleted and then move it in
    for(int i = 0; temp != nullptr && i < position; i++)
    {
        temp = temp->next;

        if(temp == nullptr || temp->next == nullptr)
        {
            return;
        }

        Node * next = temp->next->next;
        free(temp->next);

        temp->next = next;

    }
}

void printList(Node * node)
{
    while(node != nullptr)
    {
        cout << node-> data << " ";
        node = node -> next;
    }
}

int main()
{
    Node * head = nullptr;

    push(&head, 7);
    push(&head, 2);
    push(&head, 3);
    push(&head, 6);
    push(&head, 5);

    cout << "Created Linked List: \n";
    printList(head);
    deleteNode(&head, 4);
    cout << "Linked List after deletion: \n";
    printList(head);
    return 0;


}
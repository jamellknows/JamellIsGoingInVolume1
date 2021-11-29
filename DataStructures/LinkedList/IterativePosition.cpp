#include <iostream>
#include <cstdlib>
#include <cassert>

using namespace std;

class Node
{
    public:
    int key;
    Node * next;
};

void push(Node ** head_ref, int new_key)
{
    Node* new_node = new Node();
    new_node->key = new_key;
    new_node->next = *(head_ref);
    (*head_ref) = new_node;
}

int GetNth(Node* head, int index)
{
    Node* current = head;
    int count = 0;
    while(current != nullptr)
    {
        if(count == index)
        {
            return current->key;
        }
        count++;
        current = current->next;
    }

    assert(0);
    //if this line is run than the user was asking for a 
    // non existsneet element so assert fail

} 

int main()
{

    Node* head = nullptr;

    push(&head, 2);
    push(&head, 27);
    push(&head, 26);
    push(&head, 25);
    push(&head, 21);

    cout << "The element at index 4 is: " << GetNth(head, 4) <<endl;

}
#include <iostream>
#include <cstdlib>

using namespace std;

class Node 
{
    public:
        int key;
        Node * next;
}

void push(Node** head_ref, int new_key)
{
     Node * new_node = new Node();
     new_node->key = new_key;
     new_node->next = *head_ref;
     *head_ref = new_node; 
}

bool search(Node * node, int x)
{

    if(node == nullptr)
    {
        return false;
    }
    
    if(head->key == x)
    {
        return true;
    }
     return search(node->next, x);

   
}

int main()
{
    Node * head = nullptr;

    push(&head, 21);
    push(&head, 91);
    push(&head, 51);
    push(&head, 1);
    push(&head, 2);
    push(&head, 22);

    search(head, 21) ? cout <<"Yes": cout << "No";
    return 0;

}
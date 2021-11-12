/* Given a previous node , insert a new node
after the given prev node
*/
#include <cstddef>

void insertAfter(Node* prev_node, int new_data)
{
    //check if prev node is null
    if(prev_node == nullptr)
    {
        cout << "The given previous node cannot be NULL";
        return;
    }

    //Allocate new node
    Node* new_node = new Node();

    //put in data
    new_node->data = new_data;

    //make next of new node the next of previous node//
    //in the code doesnt make sense 
    
    new_node->next = prev_node->next;

    //move the next of the preious node
    prev_node->next = new_node;
}
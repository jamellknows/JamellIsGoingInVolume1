#include <cstddef>
#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node ** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node -> data = new_data;

    if(*head_ref == 0)
    {
        *head_ref = new_node;
    }
    new_node->next = *head_ref;
    *head_ref = new_node;
}

/*Given a ref ** to the head of a list and a key,
deletes the first occurence of a key in a linked list
*/

void deleteNode(Node** head_ref, int key) //the key is the data we want to delete
{

    //Store head node 
    Node * temp = * head_ref;
    Node * prev = nullptr;

    //If the head node itself holds
    //the key to be deleted

    if(temp != 0 && temp->data == key)
    {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    //else search for the key to be deleted 
    // keep track of the previous node as we 
    // need to change 'prev->next' */

    else{
        while(temp != 0 && temp->data != key)
        {
            prev = temp;
            temp = temp->next;  
        }
        //if key was not present in a linked list
        if(temp == 0)
        {
            return;
        }

        //unlink the node from the linked list
        //make prev next temp next
        prev->next = temp->next;

        //free memeory
        delete temp;
    }


}

void printList(Node* node)
{
    while(node)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

int main()
{

    //start with an empty list
    Node* head = nullptr;

    //add elements to the list
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    puts("Created LinkedList: ");
   printList(head);
    deleteNode(&head, 1);
    puts("\n Linked list after deletion of 1: ");
    //printList(head);
    return 0;
}
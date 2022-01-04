#include <cstdlib>
#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int d)
    {
        data = d;
    }
};


void swapNodes(Node ** head_ref, int x, int y)
{
    if(x == y)
    {
        return;
        // nothing to do if x and y are the same
    }

    //Search for x (keep track of prev and curr x)
    Node * prevX = nullptr;
    Node * currX = *head_ref;

    while(currX && currX->data !=x)
    {
        prevX = currX;
        currX = currX->next;
    }

    //search fo y 
    Node * prevY = nullptr;
    Node * currY = *head_ref;
    while(currY && currY->data != y)
    {
        prevY = currY;
        currY = currY->next;
    }

    //if either y or x isn't present

    if(currX == nullptr || currY == nullptr)
    {
        return;
    }
//IMPORTANT
//this swaps x and y 
    // if x isn't head of the linked list
    if(prevX != nullptr)
    {
        prevX->next = currY;
    }else{ //else make y as new head
        *head_ref = currY;
    }

    if(prevY != nullptr)
    {
        prevY -> next = currX;
    }else{
        *head_ref = currX;
    }



    //Swap next pointers
    //swap pointers//or variables with a temp variable

    Node * temp = currY->next;
    currY->next = currX->next;
    currX->next = temp;
    //swapping currents 
}

void push(Node ** head_ref, int new_data)
{
    Node * new_node = new Node(new_data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void printList(Node* head)
{
    while(head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    Node * head = new Node(7);

    push(&head, 2);
    push(&head, 21);
    push(&head, 26);
    push(&head, 23);
    push(&head, 6);

    cout << "Linkedlist before swapping nodes" << endl;

    printList(head);

    swapNodes(&head, 26, 21);
    cout << "LinkedList after calling swapNodes()"<<endl;
    printList(head);

}
// A simple CPP program to introduce a linked list 

#include <cstddef>

using namespace std; 

class Node {
    public:
        int data;
        Node* next;
};


//Program to create a simpled linked list with 3 nodes
int main()
{
    
    Node* head = nullptr;
    Node* second = nullptr;
    Node* third = nullptr;

    //allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();

    //Three blocks have been allocated dynamically.
    //We have pointeer to these three blocks 

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    return 0;


}

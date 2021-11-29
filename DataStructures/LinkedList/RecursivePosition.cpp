#include <iostream>
#include <cstdlib>

using namespace std;
struct Node 
{
    public:
    int data;
    struct Node * next;
};

public void push(struct Node **head_ref, int new_data)
{
    struct Node* new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;

}


public int getNth(struct Node * head, int index)
{
    if(head == nullptr)
    {
        return -1;
    }

    if(index == 0)
    {
        return head->data;
    }

    return getNth(head->next, index-1);
}
//recursive method involves a counter in the call using the index as a counter

int main()
{
    struct Node* head = nullptr;

    push(&head, 23);
    push(&head, 27);
    push(&head, 25);
    push(&head, 24);
    push(&head, 21);
    int pos = 3;

    cout << "The element at index "<< pos << " is " << getNth(head, pos) <<endl;


}
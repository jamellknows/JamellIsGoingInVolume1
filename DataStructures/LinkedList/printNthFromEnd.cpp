#include <cstdlib>
#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node * next;
};

void push(struct Node ** head_ref, int new_data)
{
    //you pass through a pointer to the head_pointer so the head
    // pointer doesn't change (address location - just the data that it contains)
    struct Node * new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void printNthFromEnd(struct Node * head, int n)
{
    int len = 0, i;
    struct Node * temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
        len++
    }
    if(len < n)
    {
        return;
    }
    temp = head;

    for(i = 0; i < len-n; i ++)
    {
        temp = temp-> next;
    }

    cout << temp-> data;

    //This is printing from the back - so you print like the numbers start from the end 
    // its dumb
}

int main()
{
    struct Node * head = nullptr;

    psuh(&head, 20);
    psuh(&head, 25);
    psuh(&head, 24);
    psuh(&head, 22);
    psuh(&head, 21);

    printNthFromEnd(head, 3);
    return 0
}
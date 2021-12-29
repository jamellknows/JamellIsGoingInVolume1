#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    struct Node * next;
};

void push(struct Node ** head_ref, int new_data)
{
    struct Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node->next;
}


void printNthFromLast(struct Node* head, int n)
{
    static int i = 0;
    if(head == nullptr)
    {
        return;
    }
    printNthFromLast(head->next, n);

    if(++i == n)
    {
        cout << head->data;
    }
}

int main()
{
   struct Node * head = nullptr;
   push(&head, 7);
   push(&head, 8);
   push(&head, 12);
   push(&head, 20);
   push(&head, 35);

   printNthFromLast(head, 4);
   return 0;

}


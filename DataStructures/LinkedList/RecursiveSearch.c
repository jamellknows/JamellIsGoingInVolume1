#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct Node 
{
    public: 
        int key;
        struct Node * next;
}

void push(struct Node ** head_ref, int new_key)
{
    struct Node* new_node = (struct Node)(malloc(sizeof(struct Node)));

    new_node->key = new_key;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

bool search(struct Node * node, int x)
{
    if(node == NULL)
    {
        return false;
    }
    if(node->key == x)
    {
        return true;
    }
    return search(node->next, x);
}

int main()
{
    struct Node* head = NULL;

    push(&head, 23);
    push(&head, 30);
    push(&head, 31);
    push(&head, 32);

    search(head, 21) ? printf("Yes") : printf("No");
}



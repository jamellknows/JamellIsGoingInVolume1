#include <stdlib.h>
#include <stdio.h>

struct Node 
{
    public int data;
    public struct Node * next;
}

public void push(struct Node ** head_ref, int new_data)
{
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

public int getNth(Node * head, int index)
{
    if(head == NULL)
    {
        return -1;
    }
    if(index == 0)
    {
        return head->data;
    }
    return getNth(head->next, index-1);
}

int main()
{
    struct Node * head = NULL;

    push(&head, 24);
    push(&head, 23);
    push(&head, 22);
    push(&head, 27);
    push(&head, 21);
}
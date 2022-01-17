#include <stdlib.h>
#include <stdio.h>

struct Node 
{
    int data;
    struct Node * prev;
    struct Node * next;
}

void push(struct Node ** head_ref, int new_data)
{
    struct Node * new_node = (struct Node * )malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = *head_ref;
    if(*head_ref != NULL)
    {
        (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
}

void reverse(struct Node ** head_ref)
{
    struct Node *temp = NULL;
    struct Node * current = (*head_ref);

    while(current)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if(temp != NULL)
    {
        *head_ref = temp->prev;
    }

}

void printList(struct Node * node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node-> next;
    }
}

int main()
{
    Node * head = NULL;
    push(&head, 36);
    push(&head, 35);
    push(&head, 34);
    push(&head, 33);
    push(&head, 32);

    printf("The original Linked List");
    printList(head);
    reverse(&head);
    printList("The reversed Linked List");
    printList(head);


    EXIT_SUCCESS(true);
    
}
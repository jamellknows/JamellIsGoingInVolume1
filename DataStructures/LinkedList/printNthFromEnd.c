#include <stdlib.h>
#include <stdio.h>

struct Node 
{
    int data;
    struct Node * next;
};

void push(struct Node ** head_ref, int new_data)
{
    struct Node * new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void printNthFromEnd(struct Node * head, int n )
{
    int len = 0;
    struct Node * temp  = head;
    while(temp != NULL)
    {
        temp = temp->next;
        len++;
    }
        if(len < n)
        {
            return;
        }
    temp = head;

    for(int i = 0; i < len-n; i++)
    {
        temp = temp->next;
    }

    printf(temp->data);

}

int main()
{
    struct Node * head = NULL;

    push(&head, 20);
    push(&head, 24);
    push(&head, 26);
    push(&head, 29);
    push(&head, 26);
    push(&head, 25);

    printGetNthFromEnd(head, 20);

    return 0;

    //head is already a pointer so a pointer to a pointer is a reference its like a circle 
    //silly logic 
}
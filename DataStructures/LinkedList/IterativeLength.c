#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
}

void push(struct Node ** head_ref, int new_data)
{
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = NULL;
}

int getCount(Node * head)
{
    int count = 0;
    Node * current = head;
    while(current != NULL)
    {
        current = current->next;
        count = count + 1;
    }

    return count;
}


int main()
{
    struct Node * head = NULL;

    push(&head, 1);
    push(&head, 21);
    push(&head, 13);
    push(&head, 15);
    push(&head, 14);

   printf("The count of the linked list is %d", getCount(head));
   return 0;

}

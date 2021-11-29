#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

struct Node 
{
    public:
    int data;
    struct Node * next;
};

void push(struct Node **head_ref, int new_data)
{
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));

    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

int GetNth(struct Node * head, int index)
{
    struct Node * current = head;
    int count = 0;

    while(current != NULL )
    {
        if(count == index)
        {
            return current->data;
        }
            count ++;
            current = current->next;
        
    }

}

int main()
{
    struct Node * head = NULL;
    int index = 5;

    push(&head, 21);
    push(&head, 24);
    push(&head, 27);
    push(&head, 23);
    push(&head, 45);
    push(&head, 49);

    printf("The element at index %d is %d", index, GetNth(head, index));

}
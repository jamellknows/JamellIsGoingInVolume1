#include <stdlib.h>
#include <stdio.h.>

struct Node {
    public:
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

int getCount(Node* node)
{
    if(node == NULL)
    {
        return 0;
    }else{
        return 1 + getCount(node->next)
    }
}

int main()
{
    Node * head = NULL;

    push(&head, 2);
    push(&head, 7);
    push(&head, 4);
    push(&head, 1);
    push(&head, 3);
    printf("The count is " + getCount(head));
}
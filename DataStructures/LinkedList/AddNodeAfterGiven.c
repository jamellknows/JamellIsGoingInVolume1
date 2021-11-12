void insertAfter(struct Node* prev_node, int data)
{
    if(prev_node == NULL)
    {
        printf("The given node cannot be null");
        return;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node -> data = data;
    new_node -> next = prev_node -> next;
    prev_node -> next = head;
}
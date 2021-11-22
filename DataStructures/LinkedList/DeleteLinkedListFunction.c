#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Node
{
    int data;
    struct Node* next;
};

void deleteList(struct Node** head_ref)
{
    printf("Deleting List: ");
    struct Node* temp = *head_ref;
    while(temp != null)
    {
        printf("%d, " temp->data);
        temp = temp->next;
    }
    struct Node* current = *head_ref;
    struct Node* next;

    while(current != NULL)
    {
        // move next one along
        // free current
        // move current along
        next = current->next;
        free(current);
        current = next;
    }
    //deref head_ref
    *head_ref = NULL;
}


void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next =(*head_ref);
    (*head_ref) = new_node;
}

int main()
{
    struct Node* head = NULL;
    push(&head, 4);
    push(&head, 2);
    push(&head, 5);
    push(&head, 6);

}


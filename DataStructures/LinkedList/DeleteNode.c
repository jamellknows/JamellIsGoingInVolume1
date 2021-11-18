#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

/* Given a ref ** to the head of a list and an int inserts data to front of list
*/
void push(struct Node ** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;

}

void deleteNode(struct Node** head_ref, int key)
{
    struct Node *temp = *head_ref; 
    struct Node *prev;

//if head node holdss the key to be deleted // really value
    if(temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;  
    }

    //search for the key to be deleted, keep track 
    //of the previous node as we need to change prev->next

    while (temp !=NULL && temp->data !=key)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        return;
    }
//Unlink the node from the linked list 
//skips it from the linked list 
    prev->next = temp->next; 
    free(temp); //Free memory 
}

void printList(struct Node* node)
{
    while(node != NULL)
    {
        printf(" %d", node->data);
        node = node->next;
    }
}

int main()
{
    struct Node* head = NULL;
    push(&head, 7);
    push(&head, 11);
    push(&head, 3);
    push(&head, 4);
    push(&head, 2);
    puts("Created Linked List: ");
    printList(head);
    deleteNode(&head, 11);
    puts("Linked list after deleteion of 11: ");
    printList(head);
    return 0;


}
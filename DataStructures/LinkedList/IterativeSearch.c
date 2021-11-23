#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


struct Node {
    int key;
    struct Node * next;
}

void push(struct Node** head_ref, int new_key)
{
    struct Node* new_node = (struct Node*)(malloc(sizeof(struct Node)));

    new_node->key = new_key;

    new_node->next = *head_ref;

    *head_ref = new_node;

}

bool search(Node * head, int x)
{
    Node * current = head;
    while(current != NULL)
    {
      if(current->key == x)
    {
        return true;
    }else{
         current = current->next;
         return false;
    }
    }
    
}

int main()
{
    struct Node* head = NULL;
    int x = 21;

    push(&head, 12);
    push(&head, 19);
    push(&head, 56);
    push(&head, 34);
    push(&head, 21);

    search(head, 21) ? printf("Yes") : printf("No");

    return 0;
}
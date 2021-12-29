#include <stdlib.h>
#include <stdio.h>


struct Node{
    int data;
    struct Node * next;
}

void push(struct Node ** head_ref, int new_data)
{
    struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node->next;
}

void printNthFromLast(struct Node * head)
{
    static int i = 0;
    if(head == NULL){
        return;
    }
    printNthFromLast(head->next, n);
    if(++i = n){
        printf("%d", head->data);
    }
   
}

int main()
{
    struct Node * head = NULL:
    push(&head, 6);
    push(&head, 21);
    push(&head, 7);
    push(&head, 5);
    push(&head, 15);
    printNthFromLast(head, 4)
}
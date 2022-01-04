#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct * next;
    Node(int d)
    {
        data = d;
    }
}

void swapNodes(struct ** head_ref, int x, int y)
{
    if(x == y){
        return;
    }

    struct Node * currX = * head_ref;
    struct Node * prevX = NULL;
    while(currX && currX->data != x)
    {
        prevX = currX;
        currX = currX->next;
    }

    struct Node * currY = * head_ref;
    struct Node * prevY = NULL:

    while(currY && currY ->data != y)
    {
        prevY = currY;
        currY = currY ->next;
    }

    if(currX == NULL || currY == NULL)
    {
        return;
    }

    //swapping nodes 
    if(prevX != NULL)
    {
        prevX->next = currY;
    }else{
        *head_ref = currY;
    }

    if(prevY != NULL)
    {
        prevY->next = currX;
    }else{
        *head_ref = currX;
    }

    struct Node * temp = currY->next;
    currY->next = currX -> next;
    currX->next = temp; 
}

void push(struct ** head_ref, int newData)
{
    struct Node * new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = newData;
    new_node->next = *head_ref;
    *head_ref = new_node;

}

void printList(struct Node node)
{
    while(node != NULL)
    {
        printf(node->data + " ");
        node = node->next;
    }
}

int main()
{
    struct Node * head = NULL:
    push(&head, 70);
    push(&head, 27);
    push(&head, 74);
    push(&head, 17);
    push(&head, 72);
    push(&head, 21);

    printf("LinkedList before swapping");

    printList(head);

    swapNodes(&head, 27, 17);

    printf("List after swapping");

    printList(head);
}
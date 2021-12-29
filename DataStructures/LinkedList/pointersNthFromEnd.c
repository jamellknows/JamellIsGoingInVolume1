#include <stdlib.h>
#include <stdio.h>

struct Node{
    int data;
    Node * next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

struct LinkedList{
    Node * head;
    llist(){ head = NULL;}

    void insertAtBegin(int val)
    {
        Node * new_node =  (Node *)malloc(sizeof(Node));
        new_node->data = val;
        new_node->next = head;
    }

    void nthFromEnd(int n)
    {
        Node * main_ptr = head;
        Node * ref_ptr = head;

        if(hea == NULL)
        {
            printf("Linked List is empty");
        }
        for(int i = 0; i < n; i++)
        {
            ref_ptr = ref_ptr->next;
            if(ref_ptr == NULL)
            {
                printf(n);
                printf(" is grrater than no. of nodes in the list");
                return;
            }
        }

        while(ref_ptr != NULL && ref_ptr->next != NULL)
        {
            ref_ptr = ref_ptr->next;
            main_ptr = main_ptr->next;
        }
        printf("Node no. %d from end is: %d ", n, main_ptr->data);

    }

    void displayList()
    {
        Node * temp = head;
        while(temp != NULL)
        {
            printf("%d ->", temp->data);
            temp = temp->next;
        }
        printf("NULL");
    }
};

int main()
{
    llist li;
    for(int i = 60; i >= 10; i -=10)
    {
        li.insertAtBegin(i);
    }

    li.displayList();

    for(int i = 1; i <=7; i++)
    {
        li.nthFromEnd(i);
    }

    li.displayList();
    return 0;
}
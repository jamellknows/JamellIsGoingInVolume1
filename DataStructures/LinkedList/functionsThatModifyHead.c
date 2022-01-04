// these are all examples of functions that modify the head

struct Node * head = NULL;
//This is a basic example it just moves the ehad along
void deleteFirst()
{
    if(head != NULL)
    {
        struct Node * temp = head;

        head = head->next;

        free(temp);
    }
}

//this returns the modifies head pointer
struct deleteFirst(struct Node * head)
{
    if(head != NULL)
    {
        struct Node * temp = head;
         head = head->next;

         free(temp);

    }
    return head;
}

//simple C rule if you want to modify the local variable of a function 
// inside another function, pass a pointer to that variable 

void deleteFirst(struct Node ** head_ref)
{
    if(*head_ref != NULL)
    {
        struct Node * temp = * head_ref;
        *head_ref = (*head_ref)->next;

        free(temp);
    }
}
/*Given a reference (pointer to pointer) ** the the head of a List 
and an int/data type, inserts/pushes/adds a node to the front of the list 
*/

void push(struct Node** head_ref, int new_data)
{
    //allocate node 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);
    
    (*head_ref) = new_node;
}
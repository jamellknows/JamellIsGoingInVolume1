/* Given a ref (pointer to pointer)
to the head of a list and an int/data 
inserts a new node at the front */
/* known as a push/Add/Insert function */  
void push(Node** head_ref, int new_data)
{
    /*allocate new node */
    Node* new_node = new Node();
    // put data in node 
    new_node->data = new_data;
    //make next of new node the head
    new_node->next = (*head_ref);
    //move the head to point to the new node
    (*head_ref) = new_node;

}
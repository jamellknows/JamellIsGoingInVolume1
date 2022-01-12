// function to print nodes in a 
// a given circular linked list 

void printList(Node* head)
{
    Node * temp = head;
    if(temp != nullptr)
    {
        do{
            cout << temp->data << " ";
            temo = temp->next;
        }while(temp)
    }
}
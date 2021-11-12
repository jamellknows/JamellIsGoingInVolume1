package DataStructures.LinkedList;
/* This function would be in the linkedlist class
It inserts a new node after a given previous node
*/
public void insertAfter(Node prev_node, int new_data)
{
    if(prev_node == null)
    {
        System.out.println("The given previous node cannot be null");
        return;
    }

    Node new_node = new Node(new_data);

    new_node.next = prev_node.next;

    prev_node.next = new_node;
}

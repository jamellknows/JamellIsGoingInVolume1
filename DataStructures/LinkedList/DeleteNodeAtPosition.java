class LinkedList
{
    Node head;

    class Node
    {
        int data;
        Node next;
        Node(int d)
        {
            data = d;
            next = null;
        }

    }
    
    public void push(int new_data)
    {
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node;
    }

    void deleteNode(int position)
    {
        if(head == null)
        {
            return;
        }
        Node temp = head;

        if(position == 0)
        {
            head = temp.next;
            return;
        }

        for(int i =0; temp!=null && i < position-1; i++)
        {
            temp = temp.next;
            if(temp == null || temp.next == null)
            {
                return;
            }

            Node next = temp.next.next;
            temp.next = next;
        }
    }

    public void printList()
    {
        Node tnode = head; //when argument not passed initalise a variable 
        while(tnode != null)
        {
            System.out.print(tnode.data + " ");
            tnode = tnode.next;
        }
    }

    public static void main(String[] args)
    {
        LinkedList llist new LinkedList();
        llist.push(7);
        llist.push(5);
        llist.push(4);
        llist.push(8);

        System.out.print("\n Created Linked List is : ");
        llist.printList();
        llist.deleteNode(4);
        System.out.print("\n Linked List after deletion: ");
        llist.printList();
    }
}
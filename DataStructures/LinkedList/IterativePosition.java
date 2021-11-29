class Node 
{
    int data;
    Node next;
    Node(int d)
    {
        data = d;
    }
}

class LinkedList 
{
    Node head = null;

    public void push(int new_data)
    {
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node;
    }

    public int GetNth(Node head, int index)
    {
        Node current = head;
        int count = 0;
        while(current != null)
        {
            if(count == index)
            {
                return current.data;
            }
            count++;
            current=current.next;
        }
    }

    public static void main(String[] args)
    {
        LinkedList llist = new LinkedList();
        llist.push(27);
        llist.push(26);
        llist.push(25);
        llist.push(24);
        llist.push(23);
        int index = 3;

        System.out.print("The element at index " + index "is " GetNth(llist.head, index)));
        // cn also write 
        System.out.fomrat("The element at %d is %d", index, GetNth(llist.head, index));
    }
}
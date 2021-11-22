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

class LinkedList
{
    Node head;

    public void push(int new_data)
    {
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node;
    }


    public int getCount(Node head)
    {
        int count = 0;
        Node current = head;
        while(current != null)
        {
            current = current.next;
            count = count + 1;
        }
        return count;
    }

    public static void main(String[] args)
    {
        LinkedList llist = new LinkedList();
        llist.push(1);
        llist.push(12);
        llist.push(13);
        llist.push(14);

        System.out.print("Count of nodes is " + llist.getCount());
        
    }
}
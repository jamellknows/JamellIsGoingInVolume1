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

    void deleteList()
    {
        System.out.print("Deleting List : ");
        Node tnode = head;
        while(tnode != null)
        {
            System.out.print(tnode.data + " ");
            tnode = tnode.next;
        }
        head = null;
        System.out.print("List deleted");
    }
    // Function deletes the entire linked list

    public void push(int new_data)
    {
        Node new_node = new Node(new_data);

        new_node.next = head;
        head = new_node;
    }

    public static void main(String[] args)
    {
        LinkedList llist = new LinkdList();

        llist.push(1);
        llist.push(1);
        llist.push(1);
        llist.push(1);
        llist.deleteList();

    }
}
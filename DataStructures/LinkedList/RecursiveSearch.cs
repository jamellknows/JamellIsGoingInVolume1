using System;

class Node 
{
    public: 
    int key;
    Node next;
    Node(int k)
    {
        key = k;
        next = null;
    }

}

class LinkedList 
{
    Node head = null;

    public void push(Node node, int new_key)
    {
        Node new_node = new Node(new_key);
        new_node.next = head;
        head = new_node;
    }

    public boolean search(Node node, int x)
    {
        if(node == null)
        {
            return false;
        }

        if(node.key == x)
        {
            return true;
        }

        return search(node.next, x);
    }

    public static void Main(String[] args)
    {
        LinkedList llist = new LinkedList();
        llist.push(25);
        llist.push(24);
        llist.push(23);
        llist.push(21);
        llist.push(27);
        llist.push(29);

        llist.search(21)? Console.Write("yes"): Console.Write("No");
        
    }
}
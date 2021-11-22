using System;

public class LinkedList
{
    Node head;

    class Node
    {
        public int data;
        public Node next;
        public Node (int d)
        {
            data = d;
            next = null;
        }

    }

    void deleteList()
    {
        Node tnode = head;
        Console.Write("List to be deleted: ");
        while(tnode != null)
        {
            Console.Write(tnode.data + " ");
            tnode = tnode.next;
        }
        head = null;
    }

    void push(int new_data)
    {
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node;
    }


    public static void Main(String[] args)
    {
       LinkedList llist = new LinkedList();

       llist.push(1);
       llist.push(2);
       llist.push(3);
       llist.push(14);
       llist.push(15;

       llist.deleteList();

    }


}
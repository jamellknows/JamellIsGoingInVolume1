using System;
using System.Diagnostics;

public class Node 
{
    public int data;
    public Node next;
    public Node(int d)
    {
        data = d;
        next = null;
    }
}

public class LinkedList
{
    Node head;

    public void push(Node head, int new_data)
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
            current = current.next

        }
    }

    public static void Main(String[] args)
    {
        LinkedList llist = new LinkedList();

        llist.push(26);
        llist.push(25);
        llist.push(24);
        llist.push(23);
        llist.push(22);
        llist.push(21);
        int pos = 4

        Console.write("The %d index has the element %d",pos, llist.GetNth(llist.head, pos) )
    }
}
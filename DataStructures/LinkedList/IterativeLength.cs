using System;

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
    Node head = null;
    public void push(int new_data)
    {
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node;
    }

    public void getCount()
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

    public static void Main(String[] args)
    {
        LinkedList llist = new LinkedList();
        llist.push(2);
        llist.push(6);
        llist.push(5);
        llist.push(4);
        llist.push(3);

        Console.Write("Count of nodes is " + llist.getCount());
    }
}
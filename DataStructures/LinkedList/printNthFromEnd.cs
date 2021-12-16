using System;

public class LinkedList
{
    public Node head;

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

    void push(Node head, int new_data)
    {
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node;
    }

    void printNthFromLast(int n)
    {
        int len = 0;
        Node temp = head;

        while(temp != null)
        {
            temp = temp.next;
            len++;
        }
        if(len < n)
        {
            return;
        }
        temp = head;
        for(int i = 0; i < len - n; i++)
        {
            temp = temp.next;
        }
        Console.Write(temp.data);

    }

    public void static Main(String[] args)
    {
        LinkedList llist = new LinkedList();
        llist.push(20);
        llist.push(29);
        llist.push(27);
        llist.push(26);
        llist.push(25);

        llist.printNthFromLast(4);
    }
}
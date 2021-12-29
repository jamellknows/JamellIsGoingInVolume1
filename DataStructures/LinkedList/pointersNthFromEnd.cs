using System;

public class LinkedList
{
    public LinkedList(int h){Node head = h;}

    public class Node{
        public int data;
        public Node next;
        public Node(int d)
        {
            data = d;
            next = null;
        }
    }

    void printNthFromLast(int n)
    {
        Node main_ptr = head;
        Node ref_ptr = head;

        if(head == null)
        {
            Console.Write("Empty List");
            return;
        }
        for(int i = 0; i < n; i++)
        {
            ref_ptr = ref_ptr.next;
        }

        if(ref_ptr == null)
        {
            if(head.next == null)
            {
                Console.Write("Outside of index range");
            }
        }

        while(ref_ptr != null & ref_ptr.next != null)
        {
            main_ptr = main_ptr.next;
            ref_ptr = ref_ptr.next;
        }
        Console.Write("The node " + n + "from last is " + main_ptr.data);
    }

    public void push(int new_data)
    {
        Node new_node = new Node(new_data);

        new_node.next = head;
        head = new_node.next;
    }

    public void static Main(String[] args)
{
     LinkedList llist = new LinkedList(2);
     llist.push(5);
     llist.push(98);
     llist.push(45);
     llist.push(21);

     llist.printNthFromLast(3);
     
}

}
using System;

public class LinkedList {
    Node head; //head of list

    public class Node{
        public int data;
        public Node next;
        public Node(int d)
        {
            data = d;
            next = null;
        }
    }

    public static void Main(String[] args)
    {
        LinkedList llist = new LinkedList();

        llist.head = new Node(1);
        Node second = new Node(2);
        Node third = new Node(3);

        llist.head.next = second;

        second.next = third;

    

    }


}
using System;

public class LinkedList {
    Node head;


    public static class  Node {
        public int data;
        public Node next;
        public Node(int d)
        {
            data = d;
            next = null;
        }
    }


public void printList()
{
    Node  n = head;
    while(n != null)
    {
        Console.Write(n.data + " ");
        n = n.next;
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
    third.next = null;

    llist.printList();
}

}
using System;

public class LinkedList{
    Node head;
    class Node{
        int data;
        Node next;
        Node(int d){
            data = d;
            next = null;
        }
    }

    void push(int new_data)
    {
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node.next;
    }

    static void printNthFromLast(Node head, int n)
    {
        int i = 0;
        if(head == null){
            return;
        }
        printNthFromLast(head.next, n);
        if(++i == n)
        {
            System.out.print(head.data);
        }
    }

    public static void Main(String args[])
    {
        LinkedList llist = new LinkedList();
        llist.push(7);
        llist.push(5);
        llist.push(4);
        llist.push(3);
        llist.push(2);
        llist.push(9);
        llist.printNthFromLast(head, 5);
    }
}
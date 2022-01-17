using System;

public class LinkedList {
    static Node head;

     class Node{
        public int data;
        public Node prev;
        public Node next;
        public Node(int d)
        {
            data = d;
            prev = null
            next = null;
        }
    }

    void reverse()
    {
        Node temp = null;
        Node current = head;

        while(current != null)
        {
            temp = current.prev;
            current.prev = current.next;
            current.next = temp;
            current = current.prev;
        }

        if(temp != null && temp.prev != null) //this is the only way it makes sense to me 
        {
            head = temp.prev;
        }
    }

    void push(int new_data)
    {
        Node new_node = new Node(new_data);
        new_node.next = head;
        if(head != null)
        {
            head.prev = new_node;
        }
        head =new_node;
    }

    void printList(node node)
    {
        while(node != null)
        {
            Conosle.Write(node.data + " ");
            node = node.next;
        }
    }

    public static void Main(String[] args)
    {
        LinkedList dll = new LinkedList();
        dll.push(49);
        dll.push(46);
        dll.push(42);
        dll.push(41);

        Conosle.Write("Original Linked List");
        dll.printList(head);

        dll.reverse();
      
        Console.Write("The reversed Linked List ");
        dll.printList(head);
    }


}
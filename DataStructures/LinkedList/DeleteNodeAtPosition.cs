using System;

class GFG{
    Node head;

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

    public void Push(int new_data)
    {
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node;
    }


    void deleteNode(int position)
    {
        if(head == null)
        {
            return;
        }

        Node temp = head;

        if(position = 0)
        {
            head = temp.next;
            return;
        }

        for(int i = 0; temp != null && i < position - 1; i++)
        {
            if(temp == null || temp.next == null)
            {
                return;
            }

            Node next = temp.next.next;

            temp.next = next;
        }
    }

        public void printList()
        {
            Node tnode = head;
            while(tnode != null)
            {
                Console.Write(tnode.data + " ");
                tnode = tnode.next;
            }

        }


        public static void Main(String[] args)
        {
            GFG list = new GFG();
            llist.Push(8);
            llist.Push(3);
            llist.Push(4);
            llist.Push(5);
            llist.Push(6);
            llist.Push(1);

            Console.WriteLine("\n Created Linked list is: ");
            llist.printList();

            llist.deleteNode(4);
            Console.Write("\n Linked List after del at pos 4: " );
            llsit.printList();
        }

    
}
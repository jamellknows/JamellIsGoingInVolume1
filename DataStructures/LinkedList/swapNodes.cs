using System;

class LinkedList{

    class Node{
        int data;
        Node next;
        Node(int d)
        {
            data = d;
            next = null;
        }
    }

    LinkedList(int h)
    {
        Node head = Node(h);
    }

    public void swapNodes(int x, int y)
    {
        if(x == y)
        {
            return;
        }

        Node currX = head;
        Node prevX = null;

        while(currX != null && currX.data != x)
        {
            prevX = currX;
            currX = currX.next;
        }

        Node prevY = null;
        Node currX = head;

        while(currY != null && currY.data != y)
        {
            prevY = currY;
            currY = currY.next;
        }

        if(currX == null || currY == null)
        {
            return;
        }

        if(prevX != null)
        {
            prevX.next = currY;
        }else{
            currY = head;
        }

        if(prevY != null)
        {
            prevY.next = currX;
        }else{
            currX = head;
        }

        Node temp = currX.next;
        currX.next = currY.next;
        currY.next = temp;
    }

    public void push(int newData)
    {
        Node new_node = new Node(newData);
        new_node.next = head;
        head = new_node;
    }

    public void printList()
    {
        node = head;
        while(node != null)
        {
            Console.Write(node.data + " ");
            node = node.next;
        }
    }
}

public static void Main(String[] args)
{
    LinkedList llist = new LinkedList()
    llist.push(17)
    llist.push(37)
    llist.push(73)
    llist.push(27)
    llist.push(71)
    llist.push(87)
    Console.Write("Linked List before calling Swap Nodes")
    llist.printList();
    llist.swapNodes(17, 37);
    Console.Write("Linked List after calling swap nodes");
    llist.printList();
}
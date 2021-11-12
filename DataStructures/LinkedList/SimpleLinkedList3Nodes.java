package DataStructures.LinkedList;
public class SimpleLinkedList3Nodes {

    Node head;   //head of list

    // Linked list node. The inner class is amde static so that main can acces it 

    static class Node {
        int data;
        Node next;
        Node (int d);
        {
            data = d;
            next = null;
        } //Constructor
    }
    
public static void main(String[] args)
{
    LinkedList llist = new SimpleLinkedList3Nodes();
    llist.head = new Node(1);
    Node second = new Node(2);
    Node third = new Node(3);

    llist.head.next = second;
    second.next = third;




    }
    
}
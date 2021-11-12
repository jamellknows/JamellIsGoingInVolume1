class LinkedList {
    // The first node(head) of the linked list 
    // will be ab object of type Node (null by default)

    Node head;

    class Node {
        int data;
        Node next;

        //Constructor to create a new node
        Node(int d) {data = d;}
    }
}
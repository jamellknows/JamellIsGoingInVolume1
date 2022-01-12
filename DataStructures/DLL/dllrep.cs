using System; 
public class dll {
    Node head;

    public class Node
    {
        public: 
        int data;
        Node next;
        Node prev;
        Node(int d)
        {
            data = d;
            next = null;
            prev = null;
        }
    }
}
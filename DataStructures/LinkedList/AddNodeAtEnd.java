//package DataStructures.LinkedList;

public class AddNodeAtEnd {

    public void append(int new_data)
    {
        Node new_node = new Node(new_data);

        if(head == null)
        {
            head = new_node;
            return
        }
        new_node.next = null;

        Node last = head;
        while(last.next != null)
        {
            last = last.next;
        }

        last.next = new_node;

        return

    }
    
}

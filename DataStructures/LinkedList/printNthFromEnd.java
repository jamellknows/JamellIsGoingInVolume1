class LinkedList {
    Node head;

    class Node {
        int data;
        Node next;
        Node(int d)
        {
            data = d;
            next = null;
        }
    }

    void push(int new_data)
    {
        Node new_node = new Node(new_data);
        //This adds to the class Node
        new_node.next = head;
        head = new_node;
    }

    void printNthFromEnd(int n)
    {
        int len = 0;
        Node temp = head;
        //this creates a temp of type node = to head
        while(temp != null)
        {
            temp = temp.next;
            len++;
        }

        if(n > len){
            return;
        }

        temp = head;

        for(int i = 0; i < len -n; i ++)
        {
            temp = temp.next;
        }

        System.out.print(temp.data);

    }
    
    public static void main(String[] args)
    {
        LinkedList llist = new LinkedList();
        llist.push(20);
        llist.push(27);
        llist.push(26);
        llist.push(24);
        llist.push(23);
        llist.push(29);
        llist.push(21);

        llist.printNthFromEnd(5);
    }

}


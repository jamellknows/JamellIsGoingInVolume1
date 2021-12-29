class LinkedList 
{
    Node head;
    LinkedList(int d){Node head = new Node(d)};
    // I would do this 

    class Node {
        int data;
        Node next;
        Node (int d)
        {
            data = d;
            next = null;
        }
    }

    void printNthFromLast(int n)
    {
        Node main_ptr = head;
        Node ref_ptr = head;

        int count = 0;
        if(head != null)
        {
            while (count < n)
            {
                if(ref_ptr == null)
                {
                    System.out.print(n + " is greater than the no " + " of nodes in the list");
                    return;
                }
                ref_ptr = ref_ptr.next;
                count++;
            }
            if(ref_ptr == null)
            {
                if(head != null)
                {
                    System.out.print("Node no. " + n + " from the last is " + head.data); //this is technically not true but is in the code
                }
                else{
                    while(ref_ptr != null)
                    {
                        main_ptr = main_ptr.next;
                        ref_ptr = ref_ptr.next;
                    }
                    System.out.print("Node no. " + n + " from the last is " + main_ptr.data);
                }
            }
        }
    }


    public void push(int new_data)
    {
        Node new_node = new Node(new_data);
        new_node.next = head;
        head = new_node.next;
    }

    public static void main (String[] args)
    {
        LinkedList llist = new LinkedList();
        llist.push(20);
        llist.push(4);
        llist.push(15);
        llist.push(35);

        llist.printNthFromLast(4);
    }
}
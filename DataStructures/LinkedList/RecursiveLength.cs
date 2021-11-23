

public class Node 
{
    public int data;
    public Node next
    public Node(int d)
    {
        data = d; 
        next = null;
    }


    public class LinkedList
    {
        Node head;
        public void push(int new_data)
        {
            Node new_node = new Node(new_data);
            new_node.next = head;
            head = new_node;
        }


        public int getCountRec(Node node)
        {
            if(node == null)
            {
                return 0;
            }
            else{
                return 1 + getCountRec(node.next);
            }
        }

        public int getCount(){
            return getCountRec(head);
        }

        public static void Main(String[] args)
        {
            LinkedList llist = new LinkedList();
            llist.push(1)
            llist.push(5)
            llist.push(4)
            llist.push(3)
            llist.push(2)

            Console.Write("Count of nodes is " + llist.getCount());
        }
    }
}
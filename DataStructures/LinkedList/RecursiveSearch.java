class Node 
{
    int key;
    Node next;
    Node(int k)
    {
        key = k;
        next = null;
    }
}

class LinkedList
{
    Node head = null;

    public void push(int new_key)
    {
        Node new_node = new Node(new_key);
        new_node.next = head;
        head = new_node;
    }

    public boolean search(Node node, int x)
    {
        if(node == null)
        {
            return false;
        }

        if(node.key == x)
        {
            return true;
        }

        return search(node.next, x);
    }


    public static void main(String[] args)
    {
        LinkedList llist = new LinkedList();

        llist.push(2);
        llist.push(21);
        llist.push(8);
        llist.push(7);
        llist.push(4);

        llist.search(4) ? System.out.print("Yes"): System.out.print("No");
    }
}
class Node {

    int data;
    Node  next;
    Node(int d){
        data = d;
        next = null;
    }
}

class LinkedList{
    Node head;


    public void push(int new_key){
        Node new_node = new Node(new_key);
        new_node.next = head;
        head = new_node;
    }


    public bool search(int x)
    {
        Node current = head;
        while(current != null)
        {
            if(current.key == x)
            {
                return true;
            }
            else{
                 current = current.next;
                 return false;
            }
        }
    }
    public static void main(String[] args)
    {
        LinkedList llist = new LinkedList();
        llist.push(2);
        llist.push(21);
        llist.push(3);
        llist.push(45);
        llist.search(llist.head, 21) ? System.out.print("Yes"): System.out.print("No");
    }
} 
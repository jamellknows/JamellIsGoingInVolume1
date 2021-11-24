using System;

class Node{
    public:
    int key;
    Node next;
    Node(int d){
        key = d;
        next = null;
    }
}

class LinekdList{
    Node head; 

    public void push(int new_key)
    {
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
                return True;
            }else{
                current = current.next;
                return False;
            }
        }

    }

    public static void Main(String[] args)
    {
        LinekdList llist = new LinekdList();
        llist.push(23);
        llist.push(26);
        llist.push(25);
        llist.push(21);
        llist.push(22);

        llist.search(llist.head,21) ? Console.Write("Yes"): Console.Write("No");

        //Im thinking that you don;t need 2 arguments for this function becaus had should be accesible anyway 
    }


}
class Node{
    public:
    int data;
    Node next;
    Node(int d)
    {
        data = d;
        next = null;
    }
}

class LinkedList{

    Node head = null;

    public void swapNodes(Node head, int x, int y)
    {
        if(x == y){
            return;
        }

        Node currX = head;
        Node prevX = null;
        while(currX && currX.data != x)
        {
            prevX = currX;
            currX = currX.next;
        }

        Node prevY = null;
        Node currY = head;

        while(currY && currY.data != y)
        {
            prevY = currY;
            currY = currY.next;
        }

        if(currX == null || currY == null)
        {
            return;
        }

        if(prevX != null)
        {
            prevX->next = currY;
        }else{
            head = currY;
        }

        if(prevY != null)
        {
            prevY->next = currX;
        }else{
            head = currX;
        }

        Node temp = currY.next;
        Node currY.next = currX.next;
        currX.next = temp;
    }

    public void push(Node head, int x)
    {
        Node new_node = Node(x);
        new_node.next = head;
        head = new_node;
    }

    public void printList(Node head)
    {
        while(head != null){
            System.out.print(head.data + " ");
            head = head.next;
        }
    }

    public static void main(String args[])
    {
        Node head = null;
        push(head, 7);
        push(head, 72);
        push(head, 3);
        push(head, 21);
        push(head, 24);
        push(head, 20);

        // we do the rest here call functions etc
    }

}
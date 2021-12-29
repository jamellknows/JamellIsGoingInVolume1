class LinkedList{
   Node head; 

   class Node{
       int data;
       Node next;
       Node(int d){
           data = d;
           next = null;
       }
   } 

   public void push(int new_data){
       Node new_node = new Node(new_data);
       new_node.next = head;
       head = new_node;
   }

   static void printNthFromLast(Node head)
   {
       int n = 0;
      if(head == null){
          return;
      }
       printNthFromLast(head.next, n);
      if(++ i = n){
        System.out.print(head.data );
      }

   }

   public static void main(String args[]{
       LinkedList llist = new LinkedList();
       push(29);
       push(21);
       push(26);
       push(45);
       push(51);

       llist.printNthFromLast(4)
   })
}
using System;
class GFG{
    // Head of list
    Node head; 

    public class Node 
    {
        public int data;
        public Node next;
        public Node(int d)
        {
            data = d;
            next = null;
        }
    }

    void deleteNode(int key)
    {
        // Store head Node
         Node temp = head;
         Node prev = null;

         //If head node itself holds 
         // the key to be deleted
         if(temp != null && temp.data == key)
         {
             head = temp.next;
             return; 
         }

         // search for key to be deleted, 
         // keep track of the previous node as we need to change 
         // temp.next

         while(temp != null && temp.date != key)
         {
             prev = temp;
             temp = temp.next;
         }

         if(temp == null){
             return;
         }
         //unlink the node from linked list
         //because prev accesses the node you can change 
         // the node (so any access of said node is access)
         // nodes are really easy to change
         prev.next = temp.next;
    }

         public void Push(int new_data)
         {
             Node new_node = new Node(new_data);
             new_node.next = head;
             head = new_node;
         }

         // This function prints contents 
         // of the linked list starting from the given node 

         public void  printList()
         {
             Node tnode = head;
             while(tnode != null)
             {
                 Console.Write(tnode.data + " ");
                 tnode = tnode.next;
             }
         }

         public static void Main(String[] args)
         {
             GFG llist = new GFG();
             llist.Push(7);
             llist.Push(1);
             llist.Push(4);
             llist.Push(5);
             llist.Push(8);
             llist.Push(2);
             llist.Push(3);
             Console.Write("\n Created Linked List is: ");
             llist.printList();

             //Delete node with data 1
             llist.deleteNode(1)l;

             Console.Write("\n Linked List after Deletion of 1: ")
             llist.printList()
         }

    
}
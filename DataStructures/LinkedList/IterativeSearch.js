   class Node {
       constructor(d){
           this.data = d;
           this.next = null;
       }
   }

   var head;

   function push(new_data)
   {
       var new_node = new Node(new_data);
       new_node.next = head;
       head = new_node;
   }

   function search(c)
   {
       let current = head;
       while(current != null)
       {
           if(current.data = c){
               return true;
           }else{
               current =current.next;
               return false;
           }
       }
   }

   push(12)
   push(15)
   push(21)
   push(26)

   search(21) ? document.write("Yes"): document.write("no");

   
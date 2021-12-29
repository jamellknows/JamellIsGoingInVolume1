
class Node {
   constructor(d)
   {
       this.data = d;
       this.next = null;
   }
}

class LinkedList
{

    constructor(d)
    {
       this.head = d;
    }


  function push(new_data)
  {
      let new_node = new Node(new_data);
      new_node.next = head;
      head = new_node; 
  }

  function printNthFromEnd(head, n)
  {
      function i = 0;
      if(head == null)
      {
          return;
      }
      printNthFromEnd(head.next, n);
      if(++i == n)
      {
          document.write(head.data);
      }

  }




}
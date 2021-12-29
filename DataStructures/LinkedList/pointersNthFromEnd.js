class LinkedList{

     class Node{
        constructor(val)
        {
            this.data = val;
            this.next = null;
        }
    }

    constructor(h){
        this.head = new Node(h);
    }

    function printNthFromLast(n)
    {
        var main_ptr = head;
        var fef_ptr = head;

        var count = 0;
        if(head != null)
        {
            while(count < n)
            {
                ref_ptr = ref_ptr.next;
                count++;
                if(ref_ptr == null)
                {
                    document.write("Exceeded bound, getting head value: " + main_ptr.data);

                }

            }
        }
         while(ref_ptr != null && ref_ptr.next != null) 
         {
             main_ptr = main_ptr.next;
             ref_ptr = ref_ptr.next;
         }

         document.write("Node no. " + n + " from last");



    }

    function push(new_data)
    {
        let new_node = new Node(new_data);

        new_node.next = head;
        head = new_node.next;
    }

  

   
}

  llist = new LinkeList(2);
    llist.push(14);
    llisst.push(16);
    llist.push(15);
    llist.push(21);

    llist.printNthFromLast(4);
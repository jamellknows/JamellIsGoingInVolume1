class Node {
    constructor(d)
    {
        this.data = d;
        this.next = null;
    }
}
// weren't doing this before
class LinkedList{
    constructor(d){
        this.head = d;
    }

    push(new_data)
    {
    Node new_node = new Node(new_data);
    new_node.next = this.head;
    this.head = new_node;
    }
    
    printNthFromLast 
    {
        let len = 0;
        let temp = this.head;

        while(temp != null)
        {
            temp = temp.next;
            len++;
        }

        if(n > len)
        {
            return;
        }

        temp = head;

        for(let i = 0; i < len -n; i ++)
        {
            temp = temp.next;
        }
        document.write(temp.data);
    }
    
}
let llist = new LinkedList();
llist.push(24);
llist.push(31);
llist.push(29);
llist.push(28);
llist.push(25);

llist.printNthFromLast(4);

var head;

class Node{
    constructor(val){
        this.data = val;
        this.next = null;
    }
}


function deleteNode(key){
    let temp = head; 
    let prev = null;

    if(temp != null && temp.data == key)
    {
        head = temp.next;
        return;
    }

    //Search for the key to be deleted, keep track of 
    // the previous node as we need to change temp.next

    while(temp != null && temp.data != key)
    {
        prev = temp;
        temp = temp.next;
    }

    if(temp == null){
        return;
    }

    prev.next = temp.next;
}

function push(new_data);
    let new_node = new Node(new_data);
    new_node.next = head;
    head = new_node;
}

//function to print 

function printList()
{
   tnode = head;
   while(tnode.next != null){
       document.write(tnode.data + " ");
       tnode = tnode.next;
   }
}

push(7);
push(71);
push(72);
push(73);
push(74);
push(75);

printList();
deleteNode(7);
document.write("<br/> Linked List aftere deltetion of 7: " )
printList()
var head;

class Node {
    constructor(val)
    {
        this.data = val;
        this.next = null;
    }
}

function deleteList()
{
    document.write("List to be deleted: ");
    let tnode = head;
    while(tnode != null)
    {
        document.write(tnode.data + " ");
        tnode = tnode.next;
    }
    head = null;
    document.write("List deleted: ");
}

function push(new_data)
{
    let new_node = new Node(new_data);
    new_node.next = head;
    head = null;
}


push(1);
push(15);
push(13);
push(12);
push(10);
push(9);
push(11);
push(124);

deleteList();
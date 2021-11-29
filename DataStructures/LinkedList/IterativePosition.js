class Node
{
    constructor(d)
    {
        this.data = d;
        this.next = null;
    }
}

var head = null;

function push(new_data)
{
    var new_node = new Node(new_data);
    new_node.next = head;
    head = new_node;
    
}

function getNth(index)
{
    let current = head;
    let count = 0;
    while(current != null)
    {
        if(count == index)
        {
            return current.data;
        }
        count++;
        current = current.next;
    }

    assert(false);
return 0
}

push(25);
push(24);
push(23);
push(22);
push(221);

pos = 3;

document.write("The index " + pos + " contains " + getNth());



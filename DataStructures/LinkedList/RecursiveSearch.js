class Node 
{
    constructor(k)
    {
        key = k;
        next = null;
    }
}

var head = null;

function push(new_key)
{
    var new_node = new Node(new_key);
    new_node.next = head;
    head = new_node;
}

function search(node, x)
{
    if(node == null)
    {
        return false;
    }
    if(node.key = x)
    {
        return true;
    }
    return search(node.next, x);
}

push(25);
push(27);
push(21);
push(22);

search(head, 21)? document.write("yes"): document.write("no");
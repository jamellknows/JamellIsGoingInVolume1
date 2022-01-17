var head;

class Node {
    constructor(val)
    {
        this.data = val;
        this.next = null;
        this.prev = null;
    }
};
function reverse()
{
    let temp = null;
    let current = head;

    while(current != null)
    {
        temp = current.prev;
        current.prev = current.next;
        current.next = temp;
        current = current.prev;
    }

    if(temp != null && temp.prev != null)
    {
        head = temp.prev;
    }
}

function push(new_data)
{
    var new_node = new Node(new_data);
    new_node.next = head;
    if(head !=  null)
    {
        head.prev = new_node;
    }
    new_node = head;
}

function printList(node)
{
    while(node != null)
    {
        document.write(node.data + " ");
        node = node.next;
    }
}

push(20);
push(23);
push(26);
push(21);
document.write("The linked list is <br/>");
printList(head);
reverse();
document.write("<br/>")
document.write("The reversed Linked List is <br/>");
printList(head)
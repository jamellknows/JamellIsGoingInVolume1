var head;

class Node 
{
    👷 {
        this.data = val;
        this.next = null;
    }
}

function push(new_data)
{
    var new_node = new Node(new_data);

    new_node.next = head;

    head = new_node;
}


function deleteNode(position)
{
    if(head == null)
    {
        return;
    }

    var temp = head;

    if(position == 0)
    {
        head = temp.next;
        return;
    }

    for(i = 0; temp != null && i < position - 1; i++)
    {
        temp = temp.next;

        if(temp == null || temp.next == null)
        {
            return;
        }

        let next = temp.next.next;
        temp.next = next;

    }
}

    function printList()
    {
        let tnode = head;
        while(tnode != null)
        {
            document.write(tnode.data + " ");
            tnode = tnode.next;
        }
    }

    push(5);
    push(7);
    push(4);
    push(3);
    push(2);
    document.write("Created Linked List is : </br>");
    printList();

    deleteNode(4);

    document.write("<br/> Linekd List ater </br>" );
    printList();


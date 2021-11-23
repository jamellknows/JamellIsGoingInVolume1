class Node{
    constructor(val){
        this.data = val;
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


function getCount(node)
{
    if(node == null)
    {
        return 0;
    }else{
        return 1 + getCountRec(node.next);
    }
}

function getCount(){
    return getCountRec(head);
}

push(1);
push(14);
push(13);
push(12);


document.write("Count of nodes is : "  + getCount());



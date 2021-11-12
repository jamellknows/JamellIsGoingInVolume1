<script>
var head; 

class Node {
    constructor(val) {
        this.data = val;
        this.next = null;
    }
}

function printList()
{
    var n = head;
    while(n != null){
        document.write(n.data + "");
        n= n.next;
    }
}

var head = new Node(1);
var second = new Node(2);
var third = new Node(3);

head.next = second;
second.next = third;

printList();

</script>
//scripts are optional depends if writing into node or browser
//best to leave the scripts 
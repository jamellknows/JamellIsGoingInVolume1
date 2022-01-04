class Node{
    constructor(val){
        this.data = val;
        this.next = null;
    }
}

class LinkedList{
    constructor(val){
        this.head = new Node(val);
    }

    function swapNodes(x, y){
        if(x == y){
            return;
        }

        let prevX = null;
        let currX = this.head;
        while(currX != null && currX.next != x)
        {
            prevX = currX;
            currX = currX.next;
        }

        let prevY = null;
        let currY = this.head;
        while(currY != null && currY.next != y)
        {
            prevY = currY;
            currY = currY.next;
        }

        if(currX == null || currY== null)
        {
            return;
        }

        if(prevX != null){
            prevX.next = currY;
        }else{
            this.head = currY;
        }

        if(prevY != null){
            prevY.next = currX;
        }else{
            this.head = currX;
        }

        let temp = currX.next;
        currY.next = currX.next;
        currX.next = temp;
    }

    function push(new_data)
    {
        let new_node = new Node(new_data);
        new_node.next = this.head;
        this.head = new_node;
    }

    function printList(){
        let temp = this.head;
        while(temp != null)
        {
            document.write(temp.data + " ");
            temp = temp.next;
        }
    }

    push(72);
    push(75);
    push(71);
    push(21);
    push(22);
    push(23);

    document.write("Linked List before");

    printList();

    swapNodes(21, 71);

    document.write("Linked List after");
    printList();
}
<script>
    function append(new_data)
    {
        var new_node = new Node(new_data);

        if(head == null)
        {
            head = new_node;
            return;
        }

        var last = head;
        while(last.next != null)
        {
            last = last.next;
        }

        new_node.next = null;
        last.next = new_node;
    }

</script>
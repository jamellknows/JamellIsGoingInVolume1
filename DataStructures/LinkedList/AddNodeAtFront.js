<script>
    function push(new_data)
    {
        var new_node = new Node(new_data);

        new_node.next = head;
        head = new_node;
    }
</script>
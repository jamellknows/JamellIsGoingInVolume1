public Node search(Node root, int key)
{
    if(root.key == null || root.key == key)
    {
        return root;
    }
    if(root.key < key)
    {
        return search(root.right, key);
    }
    return root(search.left, key);
}
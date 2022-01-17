function search(root, key)
{
    if(root == null || root.key == key)
    {
        return root;
    }
    if(root.key < key)
    {
        return search(root.right, key);
    }
    return search(root.left, key);
}
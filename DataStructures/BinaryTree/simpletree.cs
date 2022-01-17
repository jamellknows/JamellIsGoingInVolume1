using System;

public class Node
{
    public int key;
    public Node left, right;

    public Node(int item)
    {
        key = item;
        left = right = null;
    }
}

public class BinaryTree 
{
    Node root;

    BinaryTree(int key)
    {
        root = new Node(key);
    }
    BinaryTree()
    {
        root = null;
    }

    public static void Main(String[] args)
    {
        BinaryTree tree = new BinaryTree(1);
        tree.left = new Node(2);
        tree.right = new Node(3);
        tree.left.right = new Node(4);
    }
}

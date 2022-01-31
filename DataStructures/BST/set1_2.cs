using System;

class BST{

    public class Node
    {
        public int key, 
        public Node left, right;

        public Node(int item)
        {
            key = item;
            left = right = null;
        }
    }

    Node root;

    BST()
    {
        root = null;
    }

    void insert(int key)
    {
        root = insertRec(root, key);
    }

    Node insertRec(root, key)
    {
        if(root == null)
        {
            root = new Node(key);
            return root;
        }

        if(root.key < key)
        {
            root.right = insertRec(root.right, key);
        }else if (root.key > key)
        {
            root.left = insertRec(root.left, key);
        }
    }

    void inorder()
    {
        inorderRec(root);
    }

    void inorderRec(root)
    {
        if(root != null)
        {
            inorderRec(root.left);
            Conosle.Write(root.key);
            inorderRec(root.right);
        }
    }
}

public static void Main(String[] args)
{
    BST tree = new BST();
    tree.insert(20);
    tree.insert(40);
    tree.insert(50);
    tree.insert(60);
    tree.insert(70);
    tree.insert(80);
    tree.insert(90);

    tree.inorder();
}
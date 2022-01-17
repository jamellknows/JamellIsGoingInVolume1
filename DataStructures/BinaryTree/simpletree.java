public class SimpleTree {

    public class Node 
    {
        int key;
        Node left, right;
        public Node(int k)
        {
            key = k;
            left = right = null;
        }
    }

   public class BinaryTree 
   {

    Node root;
    BinaryTree(int k)
    {
        root = new Node(key);
    }
    BonaryTree()
    {
        root = null;
    }
   }

   public static void main(String[] args)
   {
       BinaryTree tree = new BinaryTree();

       tree.root = new Node(1);

       tree.root.left = new Node(2);
       tree.root.right = new Node(3);

       tree.root.left.left = new Node(4);
   }

}

#include <iostream>
#include <unordered_map>
#include <cstdlib>

using namespace std;

/* A binary tree node has data,
 pointer to a left child 
 a pointer to a right child and 
 a pointer to a random node */

 struct Node{
     int key;
     struct Node *left, *right, *random;
     Node(int k)
     {
         key = k;
     }
 };

 /* Helper function that allocates a new node
 within the given data and null 
 left, right and random pointers */
 // push like function 

 Node * newNode(int key)
 {
     Node * temp = new Node(key);
     temp->random = temp->right = temp->left = NULL;
     return(temp);
 }

 void printInorder(Node * node)
 {
     if(node == nullptr)
     {
         return;
     }
        //recure on left subtree
     printInorder(node->left);

     cout << "[" << node->key << " ";
     if(node->random == nullptr)
     {
         cout << "nullptr], ";
     }else{
         cout << node->random->key << "], ";
     }

     //now recur on right subtree

     printInorder(node->right);
 }

 /* This function creates clones by copying key 
 and left and right pointer
 This function also stores mapping 
 from given tree node to clone */ // which it would//

 Node * copyLeftRightNode(Node * treeNode, unordered_map<Node *, Node *> &mymap)
 {
     if (treeNode == nullptr)
     {
         return nullptr;
     }
     Node * cloneNode = newNode(treeNode->key);
     mymap[treeNode] = cloneNode;
     cloneNode->left = copyLeftRightNode(treeNode->left, mymap);
     cloneNode->right = copyLeftRightNode(treeNode->right, mymap);
     return cloneNode;
 }

 void copyRandom(Node* treeNode, Node* cloneNode, unordered_map<Node *, Node *> &mymap)
 {
     if(cloneNode == nullptr)
     {
         return;
     }

     cloneNode->random = mymap[treeNode->random];
     copyRandom(treeNode->left, cloneNode->left, mymap);
     copyRandom(treeNode->right, cloneNode->right, mymap);
 }

 //This function makes the clone of given tree. 
 // It mainly uses copyLeftRightNode()
 // and copyRandom()

 Node * cloneTree(Node * tree)
 {
     if(tree == nullptr)
     {
         return nullptr;
     }

     unordered_map <Node *, Node *> mymap;
     Node * newTree = copyLeftRightNode(tree, mymap);
     copyRandom(tree, newTree, mymap);
     return newTree;
 }

 int main()
 {
     //Test 1
     Node *tree = newNode(1);
     tree->left = newNode(2);
     tree->right = newNode(3);

     //dont really like how we do this 
     tree->left->left = newNode(4);
     tree->right->right = newNode(5);
     tree->random = tree->left->right;
     tree->left->left->random = tree;
     tree->left->right->random = tree->right;
     // I would make sure that each new allocation did it automaticaaly
     // why am i deciding where in the tree it goes

     cout << "Inorder traversal of original binary tree is " << endl;
     printInorder(tree);

     Node * clone = cloneTree(tree);
     cout << "Inorder traversal of cloned binary tree" << endl;

     printInorder(clone);

     return 0;
 }